/*
Q. (...) 

Suppose that we want to set up an array that rememebers which segments should be "on" for each digit. 

(...)
*/

#include <stdio.h>

int main(void)
{
	const int segments[10][7] = {
		{1, 1, 1, 1, 1, 1, 0},		// 0
		{0, 1, 1, 0, 0, 0, 0},		// 1
		{1, 1, 0, 1, 1, 0, 1},		// 2
		{1, 1, 1, 1, 0, 0, 1},		// 3
		{0, 1, 1, 0, 0, 1, 1},		// 4
		{1, 0, 1, 1, 0, 1, 1},		// 5
		{1, 0, 1, 1, 1, 1, 1},		// 6
		{1, 1, 1, 0, 0, 0, 0},		// 7
		{1, 1, 1, 1, 1, 1, 1}, 		// 8
		{1, 1, 1, 1, 0, 1, 1}		// 9
	};

	/* ==== check ==== */
	for (int i = 0; i <= 9; i++)
	{
		printf("%d: \n", i);
		printf(" %c\n", segments[i][0] ? '_' : ' ');
		printf("%c%c%c\n", segments[i][5] ? '|' : ' ', segments[i][6] ? '_' : ' ', segments[i][1] ? '|' : ' ');
		printf("%c%c%c\n", segments[i][4] ? '|' : ' ', segments[i][3] ? '_' : ' ', segments[i][2] ? '|' : ' ');
	}
}