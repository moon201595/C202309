#include <stdio.h>

// 5를 초기화한 상수 STUDENTS 선언 
#define STUDENTS 5


// classifyStudents라는 함수를 선언 및 정의
void classifyStudents(int scores[], char targetGrade) {

	// "학생 성적 분류"라는 문구 출력
	printf("학생 성적 분류:\n");

	// 지역변수 grade 선언
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {

		// scores 값이 90이상이면 지역변수 grade에 A를 초기화
		if (scores[i] >= 90) {
			grade = 'A';

		}
		// scores 값이 80이상이면 지역변수 grade에 B를 초기화
		else if (scores[i] >= 80) {
			grade = 'B';
		}

		// scores 값이 70이상이면 지역변수 grade에 C를 초기화
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		// scores 값이 60이상이면 지역변수 grade에 D를 초기화
		else if (scores[i] >= 60) {
			grade = 'D';
		}

		// scores 값이 60미만이면 지역변수 grade에 F를 초기화
		else {
			grade = 'F';
		}

		//만약 targetGrade와 grade의 값이 같으면 아래의 문장을 출력
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i * 1, targetGrade);
		}
	}
}


int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요:", i + 1);
		scanf_s("%d", &scores[i]);
	}

	// 공백 엔터값을 없앤다
	char ch = getchar();

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);



	return 0;
}