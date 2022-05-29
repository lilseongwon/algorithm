#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int fact(int n) {
	if (n <= 1) return 1;
	return n * fact(n - 1);
}
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", fact(num));
}