/*
Q. Write a program fragment that declares an 8*8 char array named checker_board and then uses a loop to store the following data into the array (...)
*/

#include <stdio.h>

int main(void){
	char checker_board[8][8];

	for (int row = 0; row < 8; row++)
		for (int col = 0; col < 8; col++)
			checker_board[row][col] = ((row + col) % 2 == 0) ? 'B': 'R';

	/* ==== check ==== */
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
			printf("%c ", checker_board[row][col]);
		printf("\n");
	}
}