#include <stdio.h>

// 5�� �ʱ�ȭ�� ��� STUDENTS ���� 
#define STUDENTS 5


// classifyStudents��� �Լ��� ���� �� ����
void classifyStudents(int scores[], char targetGrade) {

	// "�л� ���� �з�"��� ���� ���
	printf("�л� ���� �з�:\n");

	// �������� grade ����
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {

		// scores ���� 90�̻��̸� �������� grade�� A�� �ʱ�ȭ
		if (scores[i] >= 90) {
			grade = 'A';

		}
		// scores ���� 80�̻��̸� �������� grade�� B�� �ʱ�ȭ
		else if (scores[i] >= 80) {
			grade = 'B';
		}

		// scores ���� 70�̻��̸� �������� grade�� C�� �ʱ�ȭ
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		// scores ���� 60�̻��̸� �������� grade�� D�� �ʱ�ȭ
		else if (scores[i] >= 60) {
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



	return 0;
}