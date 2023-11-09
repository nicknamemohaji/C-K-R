#include <stdio.h>

int main(void)
{
	int month, day, year;

	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Dated this ");
	switch(day)
	{
		case 1:
			/*FALL THROUGH*/
		case 11:
			/*FALL THROUGH*/
		case 21:
			printf("%dst ", day);
			break ;
		case 2:
			/*FALL THROUGH*/
		case 12:
			printf("%dnd ", day);
			break ;
		case 3:
			/*FALL THROUGH*/
		case 13:
			printf("%drd ", day);
			break ;
		default:
			printf("%dth ", day);
	}
	printf("day of ");

	switch (month)
	{
	case 1:
		printf("January");
		break ;
	case 2:
		printf("Feburary");
		break ;
	case 3:
		printf("March");
		break ;
	case 4:
		printf("April");
		break ;
	case 5:
		printf("May");
		break ;
	case 6:
		printf("June");
		break ;
	case 7:
		printf("July");
		break ;
	case 8:
		printf("August");
		break ;
	case 9:
		printf("September");
		break ;
	case 10:
		printf("October");
		break ;
	case 11:
		printf("Nobember");
		break ;
	case 12:
		printf("December");
		break ;
	}
	printf(", 20%.2d.\n", year);

	return 0;
}