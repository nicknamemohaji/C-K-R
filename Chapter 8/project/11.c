/*
Q. Modify Programming Project 11 from Chapter 7 so that the program labels its output.
The program will need to store last name (but not the first name) in an array of characters until it can be printed. 
You may assume that the phone number is no more than 15 characters long. 
*/

#include <stdio.h>

int main(void)
{
	char ch, num[15];
	int pos;

	printf("Enter phone number: ");
	pos = 0;
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
		num[pos] = ch;
		pos++;
	} while (ch != '\n');

	printf("In numeric form: ");
	for (int i=0; i<pos; i++)
		printf("%c", num[i]);

	return 0;
}