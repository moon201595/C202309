#include <stdio.h>
int main(voide) {
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);
	return 0;
}

int main(void) {
	int one, two, three;
	printf("���� 3���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);
	return 0;
}