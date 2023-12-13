/*
Q. Write a program that prints an nxn magic square. The user will specify the value of n. (...)
*/

#include <stdio.h>

int main(void)
{
	int n;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	int arr[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			arr[i][j] = 0;

	int x = (n/2), y = 0, y_temp;
	for (int i=1; i<=n * n; i++)
	{
		arr[y][x] = i;

		y_temp = (y - 1) % n;
		if (y_temp < 0) y_temp += n;
		if (arr[y_temp][(x + 1) % n] == 0)
		{
			x = (x + 1) % n;
			y = y_temp;
		}
		else
			y++;
	}
	for (int y=0; y<n; y++)
	{
		for (int x=0; x<n; x++)
			printf("%5d", arr[y][x]);
		printf("\n");
	}

	return 0;
}