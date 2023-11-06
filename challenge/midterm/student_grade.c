#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

char subjectNames[SUBJECTS][CHARNUM] = {"����", "�߰����", "�⸻���"};
char studentNames[STUDENTS][CHARNUM] = {""};  // �л� �̸��� ����� �迭
double studentScores[STUDENTS][SUBJECTS] = {0.0};  // �л��� ���� �� ������ ������ ����� �迭

void printStudentResults(   // �л� �� ��� ���� ��� �Լ�
    char studentNames[STUDENTS][CHARNUM],  
    double studentScores[STUDENTS][SUBJECTS]) {
  for (int i = 0; i < STUDENTS; i++) {
    double finalScore = 0.0;
    for (int j = 0; j < SUBJECTS; j++) {
      finalScore += studentScores[i][j];
    }
    double average = (double)finalScore / SUBJECTS;
    printf("\t%s�� ��� ����: %.2lf\n", &studentNames[i], average);
  }
}

void printSubjectResults(  // ���� �� ��� ���� ��� �Լ�
    char studentNames[STUDENTS][CHARNUM],  
    double studentScores[STUDENTS][SUBJECTS]) {
  for (int i = 0; i < SUBJECTS; i++) {
    double subjectScore = 0.0;
    for (int j = 0; j < STUDENTS; j++) {
      subjectScore += studentScores[i][j];
    }
    double average = (double)subjectScore / STUDENTS;
    printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], average);
  }
}

int main() {
  char subjectNames[SUBJECTS][CHARNUM] = {"����", "�߰����", "�⸻���"};
  char studentNames[STUDENTS][CHARNUM] = {""};  // �л� �̸��� ����� �迭
  double studentScores[STUDENTS][SUBJECTS] = {0.0};  // �л��� ���� �� ������ ������ ����� �迭
  printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
  // TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�

  for (int i = 0; i < STUDENTS; i++) {
    printf(" %d�� ° �л��� �̸��� �Է��ϼ���\n", i + 1);
    scanf_s("%s", &studentNames[i], (int)sizeof(studentNames[i]));
  }

  // �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
  printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
  printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s", studentNames[i]);
    if (i != STUDENTS - 1) {
      printf(", ");
    }
  }
  printf("\n");
  printf("--------------------\n");
  printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ",
      subjectNames[0], subjectNames[1], subjectNames[2]);

  // TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�

  for (int i = 0; i < SUBJECTS; i++) {
    for (int j = 0; j < STUDENTS; j++) {
      printf( " %d�� ° �л��� %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n",
          j + 1, subjectNames[i]);
      scanf_s("%lf", &studentScores[j][i]);
    }
  }

  printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
  printf("--------------------\n");
  printf("�л� �� ������ ������ �����ϴ� \n");

  // TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ

  printStudentResults(studentNames, studentScores);  // �л� �� ��� ���� ��� �Լ� ȣ��

  printf("--------------------\n");
  printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

  // TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ

  printSubjectResults(studentNames, studentScores);  // ���� �� ��� ���� ��� �Լ� ȣ��

  printf("���α׷��� �����մϴ�. ");
  return 0;
}