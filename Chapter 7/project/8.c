/*
Q. Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock. The input will have the form hours:minute followed by either A, P, AM, or PM (either lower-case or upper-case).
White space is allowed (but not required) between the numerical time and the AM/PM indicator.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hour, minute, time;
	char indicator;
	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hour, &minute, &indicator);

	indicator = toupper(indicator);
	switch (indicator)
	{
		case 'A':
			break;
		case 'P':
			hour += 12;
			break;
	}
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