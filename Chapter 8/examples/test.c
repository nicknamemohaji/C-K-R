#include <stdio.h>

void ptr(int *n)
{
	printf("%p\n", n);
	*n = 0;
}

int main(void)
{
	const int a = 7;
	ptr((int *) &a);
	printf("%d", a);
}