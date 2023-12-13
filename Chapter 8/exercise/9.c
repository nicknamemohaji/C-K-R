/*
Q. Using the array of Exercise 8, write a program fragment that computes the average temparature for a month
*/

#include <stdio.h>

int main(void)
{
	int temperature_readings[30][24] = {0};
	int sum = 0;
	float average;

	for (int day = 0; day < 30; day++)
		for (int hour = 0; hour < 24; hour++)
			sum += temperature_readings[day][hour];
	average = (float) sum / 30.0f;

	/* ==== check ==== */
	printf("sum %d average %f", sum, average);
}