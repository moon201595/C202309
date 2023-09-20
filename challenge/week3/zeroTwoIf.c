#include <stdio.h>

int main() {
	// 변수 num에 0값을 넣음
	int num = 0;

	//사용자에게 번호를 입력하라는 문구 출력
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	// 사용자가 0을 입력하면 아래 단어를 출력
	if (num==0) {
		printf("zero");

	}
	// 사용자가 1을 입력하면 아래 단어를 출력
	else if (num == 1) {
		printf("one");
	}
	// 사용자가 2를 입력하면 아래 단어를 출력
	else if (num == 2) {
		printf("two");
	}
	// 사용자가 0~2 이외의 값을 입력하면 아래 단어를 출력
	else {
		printf("not 0~2");
	}

	//출력
	return 0;
}