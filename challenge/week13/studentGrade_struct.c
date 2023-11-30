#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10  // �ִ� �л� ��

// �л� ������ �����ϴ� ����ü 
typedef struct Student{
  char name[50];
  int score;
};

void classifyStudents(struct Student students[], int numStudents, char targetGrade) {
  printf("�л� ���� �з�:\n");
  for (int i = 0; i < numStudents; i++) {
    char grade;
    if (students[i].score >= 90) {
      grade = 'A';
    } else if (students[i].score >= 80) {
      grade = 'B';
    } else if (students[i].score >= 70) {
      grade = 'C';
    } else if (students[i].score >= 60) {
      grade = 'D';
    } else {
      grade = 'F';
    }

    if (targetGrade == grade) {
      printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name,
             targetGrade);
    }
  }
}

int sumScores(struct Student students[], int numStudents) {
  int sum = 0;
  for (int i = 0; i < numStudents; i++) {
    sum += students[i].score;
  }
  return sum;
}

double averageScores(struct Student students[], int numStudents) {
  int sum = sumScores(students, numStudents);
  return (double)sum / (double)numStudents;
}

void printRanks(struct Student students[], int numStudents) {
  int ranks[MAX_STUDENTS] = {0};

  for (int i = 0; i < numStudents; i++) {
    ranks[i] = 1;
    for (int j = 0; j < numStudents; j++) {
      if (students[j].score > students[i].score) {
        ranks[i]++;
      }
    }
    printf("%s �л��� ������ %d �Դϴ�.\n", students[i].name, ranks[i]);
  }
}

int main() {
  int numStudents;

  // ����ڿ��� �л� �� �Է� �ޱ�
  printf("�� ���� �л��� ����Ͻðڽ��ϱ�? (�ִ� %d��): ", MAX_STUDENTS);
  scanf("%d", &numStudents);

  
  if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
    printf("��ȿ���� ���� �л� ���Դϴ�. ���α׷��� �����մϴ�.\n");
    return 1;
  }

  // �л� ������ ������ ����ü �迭 ���� �Ҵ�
  struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));
  if (students == NULL) {
    printf("�޸� �Ҵ� ����. ���α׷��� �����մϴ�.\n");
    return 1;
  }

  // �л� �̸��� ���� �Է� �ޱ�
  for (int i = 0; i < numStudents; i++) {
    printf("�л� %d�� �̸�: ", i + 1);
    scanf("%s", students[i].name);  // ������ �������� �ʴ� �̸� �Է��� ����

    printf("�л� %d�� ����: ", i + 1);
    scanf("%d", &students[i].score);
  }

  char ch = getchar();

  char target;
  printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�:");
  scanf_s("%c", &target, 1);
  classifyStudents(students, numStudents, target); //���� �з�

  int totalSum = sumScores(students, numStudents);
  double avg = averageScores(students, numStudents);
  printf("�л��� ������ �� ���� %d�̰�, ��� ���� %.2lf�Դϴ�.\n", totalSum,
         avg);

  printRanks(students, numStudents); // �л� ���� ����

  free(students); 

  return 0;
}