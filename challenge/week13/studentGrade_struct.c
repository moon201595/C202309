#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10  // 최대 학생 수

// 학생 정보를 저장하는 구조체 
typedef struct Student{
  char name[50];
  int score;
};

void classifyStudents(struct Student students[], int numStudents, char targetGrade) {
  printf("학생 성적 분류:\n");
  for (int i = 0; i < numStudents; i++) {
    char grade;
    if (students[i].score >= 90) {
      grade = 'A';
    } else if (students[i].score >= 80) {
      grade = 'B';
    } else if (students[i].score >= 70) {
      grade = 'C';
    } else if (students[i].score >= 60) {
      grade = 'D';
    } else {
      grade = 'F';
    }

    if (targetGrade == grade) {
      printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name,
             targetGrade);
    }
  }
}

int sumScores(struct Student students[], int numStudents) {
  int sum = 0;
  for (int i = 0; i < numStudents; i++) {
    sum += students[i].score;
  }
  return sum;
}

double averageScores(struct Student students[], int numStudents) {
  int sum = sumScores(students, numStudents);
  return (double)sum / (double)numStudents;
}

void printRanks(struct Student students[], int numStudents) {
  int ranks[MAX_STUDENTS] = {0};

  for (int i = 0; i < numStudents; i++) {
    ranks[i] = 1;
    for (int j = 0; j < numStudents; j++) {
      if (students[j].score > students[i].score) {
        ranks[i]++;
      }
    }
    printf("%s 학생의 순위는 %d 입니다.\n", students[i].name, ranks[i]);
  }
}

int main() {
  int numStudents;

  // 사용자에게 학생 수 입력 받기
  printf("몇 명의 학생을 등록하시겠습니까? (최대 %d명): ", MAX_STUDENTS);
  scanf("%d", &numStudents);

  
  if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
    printf("유효하지 않은 학생 수입니다. 프로그램을 종료합니다.\n");
    return 1;
  }

  // 학생 정보를 저장할 구조체 배열 동적 할당
  struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));
  if (students == NULL) {
    printf("메모리 할당 실패. 프로그램을 종료합니다.\n");
    return 1;
  }

  // 학생 이름과 성적 입력 받기
  for (int i = 0; i < numStudents; i++) {
    printf("학생 %d의 이름: ", i + 1);
    scanf("%s", students[i].name);  // 공백을 포함하지 않는 이름 입력을 가정

    printf("학생 %d의 성적: ", i + 1);
    scanf("%d", &students[i].score);
  }

  char ch = getchar();

  char target;
  printf("특정 점수 (A,B,C,D,F)를 입력하시오:");
  scanf_s("%c", &target, 1);
  classifyStudents(students, numStudents, target); //성적 분류

  int totalSum = sumScores(students, numStudents);
  double avg = averageScores(students, numStudents);
  printf("학생들 점수의 총 합은 %d이고, 평균 값은 %.2lf입니다.\n", totalSum,
         avg);

  printRanks(students, numStudents); // 학생 성적 순위

  free(students); 

  return 0;
}