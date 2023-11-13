#include <stdio.h>

// 5�� �ʱ�ȭ�� ��� STUDENTS ����
#define STUDENTS 5

// classifyStudents��� �Լ��� ���� �� ����
void classifyStudents(int *scores, char targetGrade) {
  // "�л� ���� �з�"��� ���� ���
  printf("�л� ���� �з�:\n");

  // �������� grade ����
  char grade = ' ';
  for (int i = 0; i < STUDENTS; i++) {
    // scores ���� 90�̻��̸� �������� grade�� A�� �ʱ�ȭ
    if (*(scores+i) >= 90) {
      grade = 'A';

    }
    // scores ���� 80�̻��̸� �������� grade�� B�� �ʱ�ȭ
    else if (*(scores + i) >= 80) {
      grade = 'B';
    }

    // scores ���� 70�̻��̸� �������� grade�� C�� �ʱ�ȭ
    else if (*(scores + i) >= 70) {
      grade = 'C';
    }
    // scores ���� 60�̻��̸� �������� grade�� D�� �ʱ�ȭ
    else if (*(scores+i) >= 60) {
      grade = 'D';
    }

    // scores ���� 60�̸��̸� �������� grade�� F�� �ʱ�ȭ
    else {
      grade = 'F';
    }

    //���� targetGrade�� grade�� ���� ������ �Ʒ��� ������ ���
    if (targetGrade == grade) {
      printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i * 1, targetGrade);
    }
  }
}

// �Ű������� scores�� �Լ� sumScores ���� �� ����
int sumScores(int *scores) {
  // ���� sum ���� �� �ʱ�ȭ
  int sum = 0;
  for (int i = 0; i < STUDENTS; i++) {
    // scores���� ���� ��� ���ؼ� ���� sum�� ����
    sum += *(scores+i);
  }
  return sum;
}

// �Ű������� socres�� �Լ� averageScores ���� �� ����
double averageScores(int *scores) {
  // ���� sum�� �Ű������� scores�� �Լ� sumScores�� ����
  int sum = sumScores(scores);

  // ���� average �� ����
  double average = (double)sum / (double)STUDENTS;

  return average;
}

// �Ű������� socres�� �Լ� printRanks ���� �� ����
void printRanks(int *scores) {
  // ���� ranks�� ��� STUDENTS ��ŭ ũ�� �Ҵ�
  int ranks[STUDENTS];
  for (int i = 0; i < STUDENTS; i++) {
    ranks[i] = 1;  //�ʱ� ������ 1�� ����
    for (int j = 0; j < STUDENTS; j++) {
      if (*(scores+j) > *(scores+i)) {
        ranks[i]++;  //�� ū ���� ������ ������ ����
      }
    }
    printf("%d �л��� ������ %d �Դϴ�.\n", i, ranks[i]);
  }
}

int main() {
  int scores[STUDENTS];

  for (int i = 0; i < STUDENTS; i++) {
    printf("�л� %d�� ������ �Է��ϼ���:", i + 1);
    scanf_s("%d", &scores[i]);
  }

  // ���� ���Ͱ��� ���ش�
  char ch = getchar();

  char target;
  printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�:");
  scanf_s("%c", &target, 1);

  classifyStudents(scores, target);

  //���� sum�� �Լ� �� ����
  int sum = sumScores(scores);

  //���� average�� �Լ� �� ����
  double average = averageScores(scores);

  printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

  printRanks(scores);

  return 0;
}