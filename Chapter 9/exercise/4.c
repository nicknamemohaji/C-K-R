/*
Q. Write a function day_of_year(month, day, year) that returns the day of the year(an integer between 1 and 366) specified by the three arguments.
*/

int day_of_year(int month, int day, int year)
{
	// 이전 달을 합산
	for (int i=1; i<month; i++)
	{
		switch (i)
		{
			case 1: // fallthrough
			case 3: // fallthrough
			case 5: // fallthrough
			case 7: // fallthrough
			case 8: // fallthrough
			case 10: // fallthrough
			case 12: // fallthrough
				day += 31;
				break ;
			case 2:
				// 윤년이 아니면 28일
				if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
					day += 28;
				// 윤년이면 29일
				else
					day += 29;
				break ;
			// 4, 6, 9, 11월
			default:
				day += 30;
				break ;
		}
	}
	return day;
}
