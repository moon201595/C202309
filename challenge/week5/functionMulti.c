#include <stdio.h>

long multiF(int value); //�Լ� multiF�� ������

void main()
{
	printf("1���� 2������ ���� %ld\n", multiF(2)); //1���� 2������ ���� ���
	printf("1���� 3������ ���� %ld\n", multiF(3)); //1���� 3������ ���� ���
	printf("1���� 5������ ���� %ld\n", multiF(5)); //1���� 5������ ���� ���
	
	
}

long multiF(int value) //�Լ� multiF�� ������
{
	int i = 1; //���� ���� i�� �ʱ갪�� ������
	long multi = 1;  //���� ���� multi�� �ʱ갪�� ������

	while (i <= value) { // i�� value���� �۰ų� ������ �ݺ�

		multi = multi * i;  //multi�� i �� �����ֱ�
		i = i + 1; // i�� +1�� ���ֱ�
	}

	return multi;
}