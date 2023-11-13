/*
Q. Write a program that translates an alphabetic phone number into numeric form
(...)
*/

#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter phone number: ");
	do {
		ch = getchar();
		if ('A' <= ch && ch <= 'Z')
		{
			switch(ch)
			{
				case 'A':	// FALLTHROUGH
				case 'B':	// FALLTHROUGH
				case 'C':
					ch = '2';
					break;
				
				case 'D':	// FALLTHROUGH
				case 'E':	// FALLTHROUGH
				case 'F':
					ch = '3';
					break;
				
				case 'G':	// FALLTHROUGH
				case 'H':	// FALLTHROUGH
				case 'I':
					ch = '4';
					break;
				
				case 'J':	// FALLTHROUGH
				case 'K':	// FALLTHROUGH
				case 'L':
					ch = '5';
					break;

				case 'M':	// FALLTHROUGH
				case 'N':	// FALLTHROUGH
				case 'O':
					ch = '6';
					break;
				
				case 'P':	// FALLTHROUGH
				case 'R':	// FALLTHROUGH
				case 'S':
					ch = '7';
					break;

				case 'T':	// FALLTHROUGH
				case 'U':	// FALLTHROUGH
				case 'V':
					ch = '8';
					break;

				case 'W':	// FALLTHROUGH
				case 'X':	// FALLTHROUGH
				case 'Y':
					ch = '9';
					break;
			}
		}
		printf("%c", ch);
	} while (ch != '\n');
}