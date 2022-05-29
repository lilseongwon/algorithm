#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fibo(int n) {
	if (n == 1) return 1;
	if (n == 0) return 0;
	return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", fibo(num));
}