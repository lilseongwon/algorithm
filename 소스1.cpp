#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int sum = 0, max = 0;
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0) {
			break;
		}

		max = 0, sum = 0;
		max = (a > b) ? a : b;
		max = (max > c) ? max : c;
		sum += (max > a) ? a * a : 0;
		sum += (max > b) ? b * b : 0;
		sum += (max > c) ? c * c : 0;
		max = max * max;
		if (max == sum) {
			printf("right\n");
		}
		else if (max != sum)
		{
			printf("wrong\n");
		}
	}
}