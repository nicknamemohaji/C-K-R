/*
Q. Write the following function: 
	float compute_GPA(char grades[], int n);

The grades array will contain letter grades(A, B, C, D, F - either uppercase or lowercase); n is ther length of the array.
The function should return the average of the grades (assume that A=4, B=3, C=2, D=1, F=0).
*/


#include <ctype.h>
float compute_GPA(char grades[], int n)
{
	int gpa_sum = 0;

	for (int i=0; i<n; i++)
		switch (tolower(grades[i]))
		{
			case 'a':
				gpa_sum += 4;
				break ;
			
			case 'b':
				gpa_sum += 3;
				break ;
			
			case 'c':
				gpa_sum += 2;
				break ;
			
			case 'd':
				gpa_sum += 1;
				break ;
			
			default:
				break ;
		}
	
	return (float) gpa_sum / (float) n;
}