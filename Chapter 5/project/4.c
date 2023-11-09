/*
Here is a simplified version of the Beauefort scale, which is use to estimate wind forces.
(...)

Write a program that asks the user to enter a wind speed(in knots), then displays the corresponding description.
*/

#include <stdio.h>

int main(void)
{
	// description unclear. since "Less than 1" implies that values between 0 and 1 exists,
	// i'll consider speed as floating point value.
	float speed;

	printf("Enter wind speed in knots: ");
	scanf("%f", &speed);

	printf("The descrption for wind speed %.2f is ", speed);
	if (speed < 1.0f)
		printf("Calm");
	else if (speed < 4)
		printf("Light air");
	else if (speed < 28)
		printf("Breeze");
	else if (speed < 48)
		printf("Gale");
	else if (speed < 63)
		printf("Storm");
	else
		printf("Hurricane");
	printf(".\n");

	return 0;
}