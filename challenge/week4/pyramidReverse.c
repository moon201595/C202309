#include <stdio.h>

int main()
{
	int floor; //변수 floor을 int로 받기

	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {  //scanf_s로 받은 floor 값을 반복

		for (int j = 0; j < floor - i; j++) {  //floor-i 만큼 출력함

			printf("S");  // 위의 것을 알파벳 S로 출력함.


		}
		for (int k = 0; k < i*2 - 1; k++) {  // i*2-1만큼 출력함

			printf("*"); // 위의 것을 *모양으로 출력함.
		}

		printf("\n"); //한 층을 출력할 때마다 줄을 바꿔줌
	}
	return 0; //출력
}