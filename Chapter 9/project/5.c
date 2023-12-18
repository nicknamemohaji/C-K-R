/*
Q. Modify Project 17 from Chapter 8 so that it includes the following functions
	void create_magic_square(int n, int magic_square[n][n]);
	void print_magic_square(int n, int magic_square[n][n]);

After obtaining the number n from the user, main will call create_magic_square, passing it an nxn array that is declared inside main.
create_magic_square will fill the arrayt with numbers 1, 2, ..., n^2 as described in the original project. 
main will then call print_magic_square, which will display the array in the format described in the original project. 

Note) 교정사항에 있음. http://knking.com/books/c2/errata.html
*/

#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

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

	create_magic_square(n, arr);
	print_magic_square(n, arr);

	return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{
	int x = (n/2), y = 0, y_temp;
	for (int i=1; i<=n * n; i++)
	{
		magic_square[y][x] = i;

		y_temp = (y - 1) % n;
		if (y_temp < 0) y_temp += n;
		if (magic_square[y_temp][(x + 1) % n] == 0)
		{
			x = (x + 1) % n;
			y = y_temp;
		}
		else
			y++;
	}
}

void print_magic_square(int n, int magic_square[n][n])
{
	for (int y=0; y<n; y++)
	{
		for (int x=0; x<n; x++)
			printf("%5d ", magic_square[y][x]);
		printf("\n");
	}
}