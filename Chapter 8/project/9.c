/*
Q. Write a program that generates a "random walk" across a 10x10 array. The arraty will contain all characters (all '.' initially).
The program must randomly "walk" from element to element, always going up, down, left or right by one element. 

The elements visisted by the program will be labeled with letters A through Z, in the order visited. 

Hint: Use the srand and rand functions (see deal.c) to generate random numbers. (...) Before performing a move, check that 
	(a) it won't go outside the array, and
	(b) it doesn't take us to go to an element that already has a letter assigned. 
If either condition is violated, try moving in another direction. If all four directions are blocked, the program must terminate. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char arr[10][10], ch = 'A';
	int x, y;

	// 초기화
	srand(time(NULL));
	for (int i=0; i<10; i++)
		for (int j=0; j<10; j++)
			arr[i][j] = '.';
	
	// 초기 위치
	x = rand() % 10;
	y = rand() % 10;
	arr[x][y] = ch++;

	// "random walk"
	while (ch <= 'Z')
	{
		// 조기종료 조건
		if (
			(x + 1 >= 10 || arr[x+1][y] != '.') 
			&& (x - 1 < 0 || arr[x-1][y] != '.')
			&& (y + 1 >= 10 || arr[x][y+1] != '.')
			&& (y - 1 < 0 || arr[x][y-1] != '.')
		)
			break ;
		switch(rand() % 4)
		{
			case 0:
				if (x + 1 >= 10 || arr[x+1][y] != '.')
					continue ;
				x++;
				break ;
			case 1:
				if (x - 1 < 0 || arr[x-1][y] != '.')
					continue ;
				x--;
				break ;
			case 2:
				if (y + 1 >= 10 || arr[x][y+1] != '.')
					continue ;
				y++;
				break ;
			case 3:
				if (y - 1 < 0 || arr[x][y-1] != '.')
					continue ;
				y--;
				break ;
		}
		arr[x][y] = ch;
		ch++;
	}

	// 출력
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<10; j++)
			printf("%2c", arr[i][j]);
		printf("\n");
	}

	return 0;
}