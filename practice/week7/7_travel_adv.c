#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

// 함수 calculateTravelDays 원형선언
void calculateTravelDays();

int main() {

	//사용자로부터 도시 이름 입력받기
	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);

	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	//사용자로부터 사람 이름 받기
	printf("%d개의 여행자 이름을 차례대로 입력해주세요.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays();

	return 0;
}



void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}

		// 각 사람이 보낸 일수의 합을 구하는 함수 getSum을 정의
		int getSum(int numArray[], int length) {
			int totalDays = 0;
			for (int i = 0; i < lenth; i++) {
				totalDays += numArray[i];
			}
			return totalDays;
		}

		// 도시에서 지낸 평균 일수를 구하는 함수 getAverage를 정의
		double getAverage(int numArray[], int length) {
			int totalDays = 0;
			for (int i = 0; i < length; i++) {
				totalDays += numArray[i];
			}
			double averageDays = (double)totalDays / lenth;
			return averageDays;
		}

		//가장 오래있었던 도시를 평균일 기준으로 구하는 함수 printFamousCity 정의
		void printFamousCity(double dayArray[], int length) {
			double maxDay = 0;
			int maxDayIndex = 0;
			for (int i = 0; i < length; i++) {
				if (dayArray[i] > maxDay) {
					maxDay = dayArray[i];
					maxDayIndex = i;
				}
			}
			printf("평균일 기준으로 가장 인기있었던 도시는 %s 입니다 (평균머문일:%.2f)\n", cities[maxDayIndex], maxDay);
		}
	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for(int i=0; i<NUMCITY; i++){
		int totalDays = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDays);
		averageDays[i] = averageDay;
	}
	printf("FamousCity"(averageDays, NUMCITY));
}





