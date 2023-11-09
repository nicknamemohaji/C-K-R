/*
Moditfy broker.c program by making both of the following changes:
(...)
*/

#include <stdio.h>

int main(void)
{
	float commision, price_per_share, value;
	int	share_count;

	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);
	printf("Enter the number of shares: ");
	scanf("%d", &share_count);
	value = price_per_share * share_count;		// binary arithmetic operator이므로 share_count는 float으로 변환 후 계산됨

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

	if (share_count < 2000)
		commision = 33 + 0.3f * share_count;
	else
		commision = 33 + 0.2f * share_count;
	printf("Rival broker's commission: $%.2f\n", commision);

	return 0;
}