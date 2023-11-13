/*
Q. Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hour, minute;
	char indicator;
	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hour, &minute, &indicator);

	indicator = toupper(indicator);
	switch (indicator)
	{
		case 'A':
			break;
		case 'P':
			hour += 12;
			break;
	}

	printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
	return 0;
}