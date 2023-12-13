/*
Q. Modify the interest.c program of Section 8.1 so that it compounds interest monthly insted of annually. 
The form of the output shouldn't change: the balance should still be shown at annual intervals.
*/

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100

int main(void)
{
	int low_rate, num_years;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\n");
	printf("Years");
	for (int i=0; i < NUM_RATES; i++)
	{
		printf("%6d%%", i + low_rate);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (int year = 1; year <= num_years; year++)
	{
		printf("%3d    ", year);
		for (int rate = 0; rate < NUM_RATES; rate++)
		{
			for (int month = 1; month <= 12; month++)
				value[rate] *= 1.0 + (((double)(low_rate + rate) / 12) / 100.0);
			printf("%7.2f", value[rate]);
		}
		printf("\n");
	}
	
	return 0;
}