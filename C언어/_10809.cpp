#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char arr[100]; //문자열 배열
	scanf("%s", &arr); //문자열 입력
	int position[26]; //자리배열 (a~z까지)
	for (int i = 0; i < 26; i++) // 자리 전부 -1로 초기화
		position[i] = -1;

	for (int j = 0; j < strlen(arr); j++) { // j = 0부터 문자열 길이까지 반복
		char alpha = arr[j]; //알파벳에 arr인덱스
		if (position[alpha - 'a'] == -1) //포지션 인덱스(알파벳 - a로 인덱스를 매긴다)가 -1(기본값)일때
			position[alpha - 'a'] = j; //j(인덱스값)저장
		else
			continue; //아니면 컨티뉴
	}
	for (int k = 0; k < 26; k++) //a~z 자리배열 출력
		printf("%d ", position[k]);
}
