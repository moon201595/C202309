#include <stdio.h>

int main()
{
	int floor; //���� floor�� int�� �ޱ�

	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {  //scanf_s�� ���� floor ���� �ݺ�

		for (int j = 0; j < floor - i; j++) {  //floor-i ��ŭ �����

			printf("S");  // ���� ���� ���ĺ� S�� �����.


		}
		for (int k = 0; k < i*2 - 1; k++) {  // i*2-1��ŭ �����

			printf("*"); // ���� ���� *������� �����.
		}

		printf("\n"); //�� ���� ����� ������ ���� �ٲ���
	}
	return 0; //���
}