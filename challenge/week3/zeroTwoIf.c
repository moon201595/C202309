#include <stdio.h>

int main() {
	// ���� num�� 0���� ����
	int num = 0;

	//����ڿ��� ��ȣ�� �Է��϶�� ���� ���
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	// ����ڰ� 0�� �Է��ϸ� �Ʒ� �ܾ ���
	if (num==0) {
		printf("zero");

	}
	// ����ڰ� 1�� �Է��ϸ� �Ʒ� �ܾ ���
	else if (num == 1) {
		printf("one");
	}
	// ����ڰ� 2�� �Է��ϸ� �Ʒ� �ܾ ���
	else if (num == 2) {
		printf("two");
	}
	// ����ڰ� 0~2 �̿��� ���� �Է��ϸ� �Ʒ� �ܾ ���
	else {
		printf("not 0~2");
	}

	//���
	return 0;
}