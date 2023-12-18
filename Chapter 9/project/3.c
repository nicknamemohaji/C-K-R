/*
Q. Modify Project 9 from Chapter 8 so that it includes the following functions:
	void generate_random_walk(char walk[10][10]);
	void print_array(char walk[10]);

main first calls generate_random_walk, which initializes the array to contain '.' characters than 
replaces some of these characters by the letters A through Z, as described in the original project. 

main then calls print_array to display the array on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
	char arr[10][10];

	srand(time(NULL));
	generate_random_walk(arr);
	print_array(arr);

	return 0;
}

void generate_random_walk(char walk[10][10])
{
	int x, y;
	char ch = 'A';

	for (int i=0; i<10; i++)
		for (int j=0; j<10; j++)
			walk[i][j] = '.';
	
	// 초기 위치
	x = rand() % 10;
	y = rand() % 10;
	walk[x][y] = ch++;

	// "random walk"
	while (ch <= 'Z')
	{
		// 조기종료 조건
		if (
			(x + 1 >= 10 || walk[x+1][y] != '.') 
			&& (x - 1 < 0 || walk[x-1][y] != '.')
			&& (y + 1 >= 10 || walk[x][y+1] != '.')
			&& (y - 1 < 0 || walk[x][y-1] != '.')
		)
			break ;
		switch(rand() % 4)
		{
			case 0:
				if (x + 1 >= 10 || walk[x+1][y] != '.')
					continue ;
				x++;
				break ;
			case 1:
				if (x - 1 < 0 || walk[x-1][y] != '.')
					continue ;
				x--;
				break ;
			case 2:
				if (y + 1 >= 10 || walk[x][y+1] != '.')
					continue ;
				y++;
				break ;
			case 3:
				if (y - 1 < 0 || walk[x][y-1] != '.')
					continue ;
				y--;
				break ;
		}
		walk[x][y] = ch;
		ch++;
	}
}

void print_array(char walk[10][10])
{
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<10; j++)
			printf("%2c", walk[i][j]);
		printf("\n");
	}
}
