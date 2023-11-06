#include <stdio.h>

int main(void)
{
	int x, res;

	printf("Enter x: ");
	scanf("%d", &x);
	
	res = ((((3 * x + 2) * x- 5) * x - 1) * x + 7) * x - 6;
	printf("Result is: %d\n", res);
}