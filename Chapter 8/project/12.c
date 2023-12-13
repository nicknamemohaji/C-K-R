/*
Q. Modify Programming Project 5 from Chapter 7 (..)
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int sum = 0;
	char ch, values[26] = {
		1, 3, 3, 2, 1, 4, 2,		// A~G
		4, 1, 8, 5, 1, 3, 1,		// H~M
		1, 1, 3, 10, 1, 1, 1,		// N~U
		4, 4, 8, 4, 10				// V~Z
	};

	printf("Enter a word: ");
	for (;;) {
		ch = getchar();
		if (ch == '\n')
			break ;
		ch = toupper(ch);
		sum += values[ch - 'A'];
	}
	printf("Scrabble value: %d\n", sum);
}