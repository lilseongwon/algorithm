#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int input, a; //케이스와 학생수
	scanf("%d", &input); //케이스 입력
	for (int i = 0; i < input; i++) { //케이스동안
		int score[1000], sum = 0; //score(점수배열), sum(합계)
		double avg = 0.00; //평균 초기화
		scanf("%d", &a); //학생수 입력
		for (int j = 0; j < a; j++) { //학생수동안
			scanf("%d ", &score[j]); //점수배열 입력
			sum += score[j]; //점수 합계에 더하기
		}
		avg = (double)sum / a; //(double)합계 / a로 평균 저장
		int count = 0; //평균 넘는 학생
		for (int j = 0; j < a; j++) {
			if (score[j] > avg) //평균 넘으면
				count++; //카운트 + 1
		}
		printf("%.3f%%\n", (double)count * 100 / a); //소수점 3자리까지 평균이상 * 100 / 학생수로 비율 구하기
	}
}