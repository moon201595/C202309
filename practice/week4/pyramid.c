#include<stdio.h>

int main()
{
	int floor;

	//����ڿ��� ���� floor�� ���� �󸶷� �ϳĴ� ������ ���
	printf("�� ������ �������? (5~100)");

	//���� floor�� ����ڰ� �Է��� ���� ����
	scanf_s("%d", &floor);

	//����ڰ� �Է��� ���� floor�� ����ŭ ���
	for (int i = 0; i < floor; i++) {
		// ���� floor������ -1-i��ŭ ���
		for (int j = 0; j < floor - 1 - i; j++) {
			// ����� "S"�� ��
			printf("S");
		}

		// i*2+1��ŭ ���
		for (int k = 0; k < i * 2 + 1; k++) {
			// ����� "*"�� ��
			printf("*");
		}
		// ó������ ���ư� �� ���� ���� �ٲ�
		printf("\n");
	}
	//���
	return 0;
}