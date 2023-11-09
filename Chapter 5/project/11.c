/*
Q. Write a program that asks the user for a two-digit number, then prints the Englishh word for the number
*/

#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	printf("You entered the number ");

	switch (n / 10)
	{
	case 1:
		printf("ten");
		break;
	case 2:
		printf("twenty");
		break;
	case 3:
		printf("thirty");
		break;
	case 4:
		printf("fourty");
		break;
	case 5:
		printf("fifty");
		break;
	case 6:
		printf("sixty");
		break;
	case 7:
		printf("seventy");
		break;
	case 8:
		printf("eighty");
		break;
	case 9:
		printf("ninety");
		break;
	
	default:
		break;
	}
	printf("-");

	switch (n % 10)
	{
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("eigh");
		break;
	case 9:
		printf("nine");
		break;
	
	default:
		break;
	}
	printf(".\n");
	return 0;
}