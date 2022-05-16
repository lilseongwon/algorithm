#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h> //strlen(문자열의 길이 계산하는 함수) 사용위함.
int main()
{
	int input, score, sum; //횟수, 점수값, 점수합계
	char test[80]; //OX
	scanf("%d", &input); //횟수입력
	for (int i = 0; i < input; i++); //횟수 조건문
	{
		sum = 0; //초기화
		score = 1; //초기화
		scanf("%s", &test); //OX입력
		for (int j = 0; j < strlen(test); j++) //test 길이만큼 실행
		{
			if (test[j] == 'O') { //테스트의 j값이 O일때
				sum += score; //sum에 score값을 더하고
				score++; //score + 1 한다.
			}
			if (test[j] == 'X') //값이 X일때
				score = 1; //score는 1로 초기화되고, 점수는 변경x
		}
		printf("%d\n", sum); //sum 값 출력
	}
}