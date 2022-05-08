#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS


    int main()
    {   
        int a, b; 
        scanf("%d %d", &a, &b); //두 수 입력
        int max = 0; //최대공약수 초기화
        int min = (a < b) ? a : b; //최소공배수
        for (int i = min; i > 0; i--) { //최대공약수 구하는 식
            if (a % i == 0 && b % i == 0)
            {
                min = i;
                break;
            }
        }
        max = a * b / min; //최소공배수 = a*b / 최대공약수
        printf("%d\n%d", min, max); //출력
        return 0;
    }




