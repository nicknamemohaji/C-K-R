/*
Q. Modify Programming Project 8 from Chapter 5 so that the departure times are sotred in an arary 
and the arrival times are stored in a second array. (The times are integers, representing the number of minutes 
since midnight.) The program will use a loop to search the array of departure times for the one closest to the 
time entered by the user. 
*/

#include <stdio.h>
#include <stdlib.h>
#define FLIGHTS 8

int main(void)
{
	int hour, minute, time, closest=0;
	int departure[FLIGHTS] = {
		8 * 60 + 0, 
		9 * 60 + 43, 
		11 * 60 + 19,
		12 * 60 + 47,
		14 * 60 + 0,
		15 * 60 + 45,
		19 * 60 + 0,
		21 * 60 + 45
	};
	int arrival[FLIGHTS] = {
		10 * 60 + 16,
		11 * 60 + 52,
		13 * 60 + 31,
		15 * 60 + 0,
		16 * 60 + 8,
		17 * 60 + 55,
		21 * 60 + 20,
		23 * 60 + 58
	};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	time = hour * 60 + minute;

	for (int i=0; i<FLIGHTS; i++)
	{
		if (abs(time - departure[i]) < abs(time - departure[closest]))
			closest = i;
	}
	
	printf("Closest departure time is %2d:%.02d ", departure[closest] / 60, departure[closest] % 60);
	if (departure[closest] < 12 * 60)
		printf("a.m.,");
	else
		printf("p.m.,");
	printf("arriving at %2d:%.02d ", arrival[closest] / 60, arrival[closest] % 60);
	if (arrival[closest] < 12 * 60)
		printf("a.m.\n");
	else
		printf("p.m.\n");

	return 0;
}