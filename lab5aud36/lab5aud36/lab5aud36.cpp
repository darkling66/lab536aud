// lab5aud36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
int fibonachi(int, int, int);

int main()
{
	int i, j;
	for (i = 1; i <= 10; i++) {
		j = fibonachi(i, 1, 1);
	}
	system("pause");
	return 0;
}

int fibonachi(int n, int p, int c)
{
	if (n <= 2) {
		printf("%d\n", c);
		return c;
	}
	return fibonachi(n - 1, c, p + c);
}
