#include <stdio.h>

int main(void)
{
	float commision, value;

	printf("Enter value of trade: ");
	scanf("%f", &value);

	if (value < 2500.0f)
		commision = 30.0f + value * 0.017f;
	else if (value < 6250.0f)
		commision = 56.0f + value * 0.0066f;
	else if (value < 20000.0f)
		commision = 76.0f + value * 0.0034f;
	else if (value < 50000.0f)
		commision = 100.0f + value * 0.0022f;
	else if (value < 500000.0f)
		commision = 155.0f + value * 0.0011f;
	else
		commision = 255.0f + value * 0.0009f;
	
	if (commision < 39.0f)
		commision = 39.0f;
	
	printf("Commision: $%.2f\n", commision);

	return 0;
}