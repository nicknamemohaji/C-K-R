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

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);
	
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
				is_one_earlier = 0;		// 같은 경우도 포함
	
	if (is_one_earlier)
		printf("%d/%02d/%02d is earlier than %d/%02d/%02d\n", m1, d1, y1, m2, d2, y2);
	else
		printf("%d/%02d/%02d is earlier than %d/%02d/%02d\n", m2, d2, y2, m1, d1, y1);

	return 0;
}