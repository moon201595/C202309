#include <stdio.h>

int main()
{
	// i�� 0�̶� ����
	int i = 0;
	do {
		//i�� �ݺ��� ������ 1�� ����
		i++;

		// i�� ¦����� �ݺ��� ó������
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world!%d\n", i);
		//i�� 10���� �۴ٶ�� ����
	} while (i < 10);
		
	return 0;
}