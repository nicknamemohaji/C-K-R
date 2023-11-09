/*
Q. Programming project 9 in Chapter 5 (...)
Generalize the program so that the user may eneter any number of dates. The user will enter 0/0/0
to indicate that no more dates will be entered.  
*/

/*
Q. Wrote a program that prompts the user to enter two dates
and then indicates which date comes earlier on the calender.
*/

#include <stdio.h>

int main(void)
{
	int d1, m1, y1;
	int d2, m2, y2;
	int is_one_earlier;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);

	for ( ; ; ) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &m2, &d2, &y2);
		if (d2 == 0 && m2 == 0 && y2 == 0)
			break;

		if (y1 < y2)
			is_one_earlier = 1;
		else if (y2 < y1)
			is_one_earlier = 0;
		else
			if (m1 < m2)
				is_one_earlier = 1;
			else if (m2 < m1)
				is_one_earlier = 0;
			else
				if (d1 < d2)
					is_one_earlier = 1;
				else
					is_one_earlier = 0;
		if (!is_one_earlier)
		{
			d1 = d2;
			m1 = m2;
			y1 = y2;
		}
	}
	printf("%d/%02d/%02d is the earliest date\n", m1, d1, y1);

	return 0;
}