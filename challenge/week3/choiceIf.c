#include <stdio.h>

int main() {
	// 변수 choice 선언
	int choice;

	//사용자가 고를 번호들 출력
	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);

	// 사용자가 1번을 선택하면 아래 문장을 출력
	if (choice == 1) {
		printf("파일을 저장합니다");

	}
	// 사용자가 2번을 선택하면 아래 문장을 출력
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	}
	// 사용자가 3번을 선택하면 아래 문장을 출력
	else if (choice == 3) {
		printf(" 종료합니다");
	}
	// 사용자가 1, 2, 3이외의 값을 입력하면 아래 문장을 출력
	else {
		printf("잘못 입력하셨습니다.");
	}
	//출력
	return 0;
}