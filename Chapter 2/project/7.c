#include <stdio.h>

int main(void)
{
	int dollar;
	int temp;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar);

	temp = dollar / 20;
	printf("$20 bills: %d\n", temp);
	dollar = dollar - temp * 20;
	temp = dollar / 10;
	printf("$10 bills: %d\n", temp);
	dollar = dollar - temp * 10;
	temp = dollar / 5;
	printf("$5 bills: %d\n", temp);
	dollar = dollar - temp * 5;	
	printf("$1 bills: %d\n", dollar / 1);

	return 0;
}