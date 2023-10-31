#include <stdio.h>

long multiF(int value); //함수 multiF를 선언함

void main()
{
	printf("1부터 2까지의 곱은 %ld\n", multiF(2)); //1부터 2까지의 곱을 출력
	printf("1부터 3까지의 곱은 %ld\n", multiF(3)); //1부터 3까지의 곱을 출력
	printf("1부터 5까지의 곱은 %ld\n", multiF(5)); //1부터 5까지의 곱을 출력
	
	
}

long multiF(int value) //함수 multiF를 정의함
{
	int i = 1; //지역 변수 i에 초깃값을 설정함
	long multi = 1;  //지역 변수 multi에 초깃값을 설정함

	while (i <= value) { // i가 value보다 작거나 같으면 반복

		multi = multi * i;  //multi에 i 를 곱해주기
		i = i + 1; // i에 +1을 해주기
	}

	return multi;
}