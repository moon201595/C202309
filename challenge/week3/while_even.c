#include <stdio.h>

int main()
{
	// i�� 0�̶� ����
	int i = 0;
	//i�� 10���� �۴ٶ�� ����
	while (i < 10) { 
		//i�� �ݺ��� ������ 1�� ����
		i++;
		// i�� ¦����� �ݺ��� ó������
		if (i % 2 == 0){
			continue;
		}
		printf("%d Hello world\n", i);
		
	}
	return 0;
}

