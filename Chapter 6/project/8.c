/*
Q. Write a program that prints a one-month calendar. The user specifies the number of days in the month and
the day of the week on which the month begins
*/

#include <stdio.h>

int main(void)
{
	int number_of_days, starting_day, n;

	printf("Enter the number of days in month: ");
	scanf("%d", &number_of_days);
	printf("Enter starting day of the week (1=sun, 7=sat): ");
	scanf("%d", &starting_day);

	n = 1;
	for (int i = 1; i < starting_day; i++)
		printf("     ");
	for (int i = starting_day; i <= 7; i++)
			printf("%5d", n++);
	printf("\n");
	while (n <= number_of_days)
	{
		for (int i = 0; i < 7 && n <= number_of_days; i++)
			printf("%5d", n++);
		printf("\n");
	}

	return 0;
}