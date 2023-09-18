#include <stdio.h>

int main()
{
	// i는 0이라 선언
	int i = 0;
	do {
		//i는 반복할 때마다 1씩 증가
		i++;

		// i가 짝수라면 반복문 처음으로
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world!%d\n", i);
		//i가 10보다 작다라는 조건
	} while (i < 10);
		
	return 0;
}