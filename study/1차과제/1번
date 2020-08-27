#include <stdio.h>

void swap(int* x, int* y);

int main()
{
	int a = 1;
	int b = 2;
	swap(&a, &b);

	printf("%d %d", a, b);
}

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
