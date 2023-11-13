/*
Q. Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period
*/

#include <stdio.h>

int main(void)
{
	char ch, last_name;

	printf("Enter a first and last name: ");
	last_name = getchar();
	do {
		ch = getchar();
	} while(ch != ' ');

	for(;;) {
		ch = getchar();
		if (ch != '\n')
			printf("%c", ch);
		else
			break;
	}
	printf(", %c.\n", last_name);
	
	return 0;
}