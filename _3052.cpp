#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int input, result = 0;  //입력과 결과값
	int remain[10];	 //배열

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		remain[i] = input % 42; //입력 % 42(=나머지)를 배열 i에 저장
	}
	for (int i = 0; i < 10; i++) { //i로 조건문
		int count = 0;  //같으면 체크하는 count초기화
		for (int j = i + 1; j++) { //비교할 j만들기(i+j라서 비교할 때 자기 자신은 제외함)
			if (remain[i] == remain[j]) count++;  //i와 j가 같다면 카운트 + 1(같은 수가 3개라면 1만 남고 2개는 0이 되는 메커니즘)
		}
		if (count == 0) result++; //카운트가 0일때 결과값 + 1
	}
	printf("%d", result); //결과값 출력
}