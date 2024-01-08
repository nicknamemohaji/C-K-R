/*
Q. Modify Programming Project 8 from Chapter 5 so that it includes the following function:
    void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

This function will find the flight whose departure time is closest to desired_time (expressed in minutes since midnight).
It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables
pointed to by departure_time and arrival_time, respectively.
*/

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
	int hour, minute, time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	time = hour * 60 + minute;

    int departure_time, arrival_time;
    find_closest_flight(time, &departure_time, &arrival_time);


	printf("Closest departure time is ");
    if (departure_time < (12 * 60))
        printf("%d:%.2d a.m., ", departure_time / 60, departure_time % 60);
    else if (departure_time / 60 == 12)
        printf("%d:%.2d p.m., ", departure_time / 60, departure_time % 60);
    else
        printf("%d:%.2d p.m., ", departure_time / 60 - 12, departure_time % 60);
    if (arrival_time < (12 * 60))
        printf("arriving at %d:%.2d a.m.\n", arrival_time / 60, arrival_time % 60);
    else
        printf("arriving at %d:%.2d p.m.\n", arrival_time / 60 - 12, arrival_time % 60);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	if (desired_time < (8 * 60))
    {
		if ((desired_time + 24 * 60) - (21 * 60 + 45)> (8 * 60) - desired_time)
        {
            *departure_time = 8 * 60;
            *arrival_time = 10 * 60 + 16;
        }
		else
        {
            *departure_time = 21 * 60 + 45;
            *arrival_time = 23 * 60 + 58;
        }
    }
	else if (desired_time < (9 * 60 + 43))
    {
		if (desired_time - (8 * 60) > (9 * 60 + 43) - desired_time)
        {
            *departure_time = 9 * 60 + 43;
            *arrival_time = 11 * 60 + 52;
        }
		else
        {
            *departure_time = 8 * 60;
            *arrival_time = 10 * 60 + 16;
        }
    }
	else if (desired_time < (11 * 60 + 19))
    {
		if (desired_time - (9 * 60 + 43) > (11 * 60 + 19) - desired_time)
        {
            *departure_time = 11 * 60 + 19;
            *arrival_time = 13 * 60 + 31;
        }
		else
        {
            *departure_time = 9 * 60 + 43;
            *arrival_time = 11 * 60 + 52;
        }
    }
	else if (desired_time < (12 * 60 + 47))
    {
		if (desired_time - (11 * 60 + 19) > (12 * 60 + 47) - desired_time)
        {
            *departure_time = 12 * 60 + 47;
            *arrival_time = 15 * 60;
        }
		else 
        {
            *departure_time = 11 * 60 + 19;
            *arrival_time = 13 * 60 + 31;
        }
    }
	else if (desired_time < (14 * 60))
    {
		if (desired_time - (12 * 60 + 47) > (14 * 60) - desired_time)
        {
            *departure_time = 14 * 60;
            *arrival_time = 16 * 60 + 8;
        }
		else
        {
            *departure_time = 12 * 60 + 47;
            *arrival_time = 15 * 60;
        }
    }
	else if (desired_time < (15 * 60 + 45))
    {
		if (desired_time - (14 * 60) > (15 * 60 + 45) - desired_time)
        {
            *departure_time = 15 * 60 + 45;
            *arrival_time = 17 * 60 + 55;
        }
		else
        {
            *departure_time = 14 * 60;
            *arrival_time = 16 * 60 + 8;
        }
    }
	else if (desired_time < (19 * 60))
    {
		if (desired_time - (15 * 60 + 45) > (19 * 60) - desired_time)
        {
            *departure_time = 19 * 60;
            *arrival_time = 21 * 60 + 20;
        }
		else
        {
            *departure_time = 15 * 60 + 45;
            *arrival_time = 17 * 60 + 55;
        }
    }
	else if (desired_time < (21 * 60 + 45))
    {
		if (desired_time - (19 * 60) > (21 * 60 + 45) - desired_time)
        {
            *departure_time = 19 * 60;
            *arrival_time = 21 * 60 + 20;
        }
		else
        {
            *departure_time = 21 * 60 + 45;
            *arrival_time = 23 * 60 + 58;
        }
    }
	else
    {
		if (desired_time - (21 * 60 + 45) > ((24 + 8) * 60) - desired_time)
        {
            *departure_time = 8 * 60;
            *arrival_time = 10 * 60 + 16;
        }
		else
        {
            *departure_time = 21 * 60 + 45;
            *arrival_time = 23 * 60 + 58;
        }
    }
}
