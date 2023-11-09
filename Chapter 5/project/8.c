/*
The following table shows the daily flights from one city to another: 
(...)

Write a program that asks the user to enter a time (...). The program then displays the
departure and arrival times for the flight whose departure time is closest to the entered by the user.

Hint: Convert the input into a time expressed in minutes since midnight, and compare it to the departure times,
also expressed in minutes since midnight.
*/

#include <stdio.h>

int main(void)
{
	int hour, minute, time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	time = hour * 60 + minute;


	printf("Closest departure time is ");
	if (time < (8 * 60))
		if ((time + 24 * 60) - (21 * 60 + 45)> (8 * 60) - time)
			printf("8:00 a.m., arriving at 10:16 a.m.\n");
		else
			printf("9:45 p.m., arriving at 11:58 p.m.\n");
	else if (time < (9 * 60 + 43))
		if (time - (8 * 60) > (9 * 60 + 43) - time)
			printf("9:43 a.m., arriving at 11:52 a.m.\n");
		else
			printf("8:00 a.m., arriving at 10:16 a.m.\n");
	else if (time < (11 * 60 + 19))
		if (time - (9 * 60 + 43) > (11 * 60 + 19) - time)
			printf("11:19 a.m., arriving at 1:31 p.m.\n");
		else
			printf("9:43 a.m., arriving at 11:52 a.m.\n");
	else if (time < (12 * 60 + 47))
		if (time - (11 * 60 + 19) > (12 * 60 + 47) - time)
			printf("12:47 p.m., arriving at 3:00 p.m.\n");
		else 
			printf("11:19 a.m., arriving at 1:31 p.m.\n");
	else if (time < (14 * 60))
		if (time - (12 * 60 + 47) > (14 * 60) - time)
			printf("2:00 p.m., arriving at 4:08 p.m.\n");
		else
			printf("12:47 p.m., arriving at 3:00 p.m.\n");
	else if (time < (15 * 60 + 45))
		if (time - (14 * 60) > (15 * 60 + 45) - time)
			printf("3:45 p.m., arriving at 5:55 p.m.\n");
		else
			printf("2:00 p.m., arriving at 4:08 p.m.\n");
	else if (time < (19 * 60))
		if (time - (15 * 60 + 45) > (19 * 60) - time)
			printf("7:00 p.m., arriving at 9:20 p.m.\n");
		else
			printf("3:45 p.m., arriving at 5:55 p.m.\n");
	else if (time < (21 * 60 + 45))
		if (time - (19 * 60) > (21 * 60 + 45) - time)
			printf("7:00 p.m., arriving at 9:20 p.m.\n");
		else
			printf("9:45 p.m., arriving at 11:58 p.m.\n");
	else
		if (time - (21 * 60 + 45) > ((24 + 8) * 60) - time)
			printf("8:00 a.m., arriving at 10:16 a.m.\n");
		else
			printf("9:45 p.m., arriving at 11:58 p.m.\n");

	return 0;
}