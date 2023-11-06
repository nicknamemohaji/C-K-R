#include <stdio.h>

int main(void)
{
	int x, res;

	printf("Enter x: ");
	scanf("%d", &x);

	res = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - 1 * (x * x) + 7 * x - 6;
	printf("Result is: %d\n", res);
}