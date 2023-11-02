#include <stdio.h>

int hapf(int value); //함수 hapf를 선언함

int main() 
{
	printf("1부터    10까지의 합은 %d\n", hapf(10)); //1부터 10까지의 합을 출력
	printf("1부터  100까지의 합은 %d\n", hapf(100)); //1부터 100까지의 합을 출력
	printf("1부터 1000까지의 합은 %d\n", hapf(1000)); //1부터 1000까지의 합을 출력
	return 0;
}

int hapf(int value) //함수 hapf를 정의함
{
	int i = 1; //지역 변수 i에 초깃값을 설정함
	int hap = 0;  //지역 변수 hap에 초깃값을 설정함
	
	while (i <= value) { // i가 value보다 작거나 같으면 반복
	
		hap = hap + i;  //hap에 i를 더해주기
		i = i + 1; // i에 +1을 해주기
	}
		
	return hap;
}