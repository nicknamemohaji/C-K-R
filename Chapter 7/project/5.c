/*
Q. In the SCRABBLE Crossword Game, (...)

Write a program that computes the value of a word by summing the values of its letters
Your program should allow any mixture of lower-case and upper-case letters in ther word. 
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int sum = 0;
	char ch;

	printf("Enter a word: ");
	do {
		ch = getchar();
		ch = toupper(ch);
		switch(ch)
		{
			case 'A':	// FALLTHROUGH
			case 'E':	// FALLTHROUGH
			case 'I':	// FALLTHROUGH
			case 'L':	// FALLTHROUGH
			case 'N':	// FALLTHROUGH
			case 'O':	// FALLTHROUGH
			case 'R':	// FALLTHROUGH
			case 'S':	// FALLTHROUGH
			case 'T':	// FALLTHROUGH
			case 'U':	// FALLTHROUGH
				sum += 1;
				break;

			case 'D':	// FALLTHROUGH
			case 'G':
				sum += 2;
				break;
						
			case 'B':	// FALLTHROUGH
			case 'C':	// FALLTHROUGH
			case 'M':	// FALLTHROUGH
			case 'P':
				sum += 3;
				break;

			case 'F':	// FALLTHROUGH
			case 'H':	// FALLTHROUGH
			case 'V':	// FALLTHROUGH
			case 'W':	// FALLTHROUGH
			case 'Y':
				sum += 4;
				break;

			case 'K':
				sum += 5;
				break;

			case 'J':	// FALLTHROUGH
			case 'X':
				sum += 8;
				break;
			
			case 'Q':	// FALLTHROUGH
			case 'Z': 
				sum += 10;
				break;
		}
	} while (ch != '\n');
	printf("Scrabble value: %d\n", sum);
}