#include <stdio.h>

int main(void)
{
	int n, sum;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");

	sum = 0;
	n = -1;
	while (n != 0)
	{
		scanf("%d", &n);
		sum += n;
	}

	printf("The sum is: %d\n", sum);

	return 0;
}