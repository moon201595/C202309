#include <stdio.h>

long multiF(int value); //�Լ� multiF�� ������

void main()
{
	printf("1���� 2������ ���� %d\n", multiF(2)); //1���� 2������ ���� ���
	printf("1���� 3������ ���� %d\n", multiF(3)); //1���� 3������ ���� ���
	printf("1���� 5������ ���� %d\n", multiF(5)); //1���� 5������ ���� ���
}

long multiF(int value) //�Լ� hapf�� ������
{
	int i = 1; //���� ���� i�� �ʱ갪�� ������
	long multi = 1;  //���� ���� multi�� �ʱ갪�� ������

	while (i <= value) { // i�� value���� �۰ų� ������ �ݺ�
		
		multi = multi * i;  //hap�� i �� �����ֱ�
		i = i + 1; // i�� +1�� ���ֱ�
	}

	return multi;
}