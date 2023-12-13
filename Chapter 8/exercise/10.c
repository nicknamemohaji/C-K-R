/*
Q. Write a program fragment that declares an 8 * 8 char array named chess_board. Include an initializer that puts the following data into the array (...)
*/

#include <stdio.h>

int main(void)
{
	char chess_board[8][8] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
	};

	/* ==== check ==== */
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
			printf("%c ", chess_board[row][col]);
		printf("\n");
	}
}