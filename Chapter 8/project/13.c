/*
Modify Programming Project 11 from Chapter 7 so that the program labels its output.

The program will need to store the last name (but not the first name) in an array of characters
until it can be printed. You may assume that the last name is no more than 20 characters long.
*/

#include <stdio.h>

int main(void)
{
	char ch, last_name[20];
	int pos;

	printf("Enter a first and last name: ");
	pos = 0;
	do {
		ch = getchar();
		last_name[pos] = ch;
		pos++;
	} while(ch != ' ');

	for(;;) {
		ch = getchar();
		if (ch != '\n')
			printf("%c", ch);
		else
			break;
	}
	printf(", %c.\n", last_name[0]);
	
	return 0;
}