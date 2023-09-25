#include<stdio.h>

int main()
{
	int floor;

	//사용자에게 변수 floor의 값을 얼마로 하냐는 질문을 출력
	printf("몇 층으로 쌓을까요? (5~100)");

	//변수 floor가 사용자가 입력한 수를 받음
	scanf_s("%d", &floor);

	//사용자가 입력한 변수 floor의 값만큼 출력
	for (int i = 0; i < floor; i++) {
		// 변수 floor값에서 -1-i만큼 출력
		for (int j = 0; j < floor - 1 - i; j++) {
			// 출력을 "S"로 함
			printf("S");
		}

		// i*2+1만큼 출력
		for (int k = 0; k < i * 2 + 1; k++) {
			// 출력을 "*"로 함
			printf("*");
		}
		// 처음으로 돌아갈 때 마다 줄을 바꿈
		printf("\n");
	}
	//출력
	return 0;
}