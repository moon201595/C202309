#include <stdio.h>

int hapf(int value); //�Լ� hapf�� ������

int main() 
{
	printf("1����    10������ ���� %d\n", hapf(10)); //1���� 10������ ���� ���
	printf("1����  100������ ���� %d\n", hapf(100)); //1���� 100������ ���� ���
	printf("1���� 1000������ ���� %d\n", hapf(1000)); //1���� 1000������ ���� ���
	return 0;
}

int hapf(int value) //�Լ� hapf�� ������
{
	int i = 1; //���� ���� i�� �ʱ갪�� ������
	int hap = 0;  //���� ���� hap�� �ʱ갪�� ������
	
	while (i <= value) { // i�� value���� �۰ų� ������ �ݺ�
	
		hap = hap + i;  //hap�� i�� �����ֱ�
		i = i + 1; // i�� +1�� ���ֱ�
	}
		
	return hap;
}