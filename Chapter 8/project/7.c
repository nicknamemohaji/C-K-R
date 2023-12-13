/*
Q. Write a program that reads a 5x5 array of integers and then prints the row sums and the column sums. 
*/

#include <stdio.h>

int main(void)
{
	int arr[5][5], total;

	for (int y=0; y<5; y++)
	{
		printf("Enter row %d: ", y + 1);
		for (int x=0; x<5; x++)
			scanf("%d", &arr[x][y]);
	}

	printf("\nRow totals: ");
	for (int y=0; y<5; y++)
	{
		total = 0;
		for (int x=0; x<5; x++)
			total += arr[x][y];
		printf("%3d", total);
	}
	printf("\nColumn totals: ");
	for (int x=0; x<5; x++)
	{
		total = 0;
		for (int y=0; y<5; y++)
			total += arr[x][y];
		printf("%3d", total);
	}
	printf("\n");

	return 0;
}