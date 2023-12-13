/*
Q. Modifty Programming Project 7 so that it prompts for five quiz grades for each of five students,
then computes the total score and average score for each student, and the average score, high score, and low score for each quiz.
*/

/*
Q. Write a program that reads a 5x5 array of integers and then prints the row sums and the column sums. 
*/

#include <stdio.h>
#include <stdint.h>	// for INT32_MAX

int main(void)
{
	int arr[5][5], total, min, max;

	for (int y=0; y<5; y++)
	{
		printf("Enter student %d: ", y + 1);
		for (int x=0; x<5; x++)
			scanf("%d", &arr[x][y]);
	}

	printf("============= Students ==============\n");
	for (int y=0; y<5; y++)
	{
		total = 0;
		for (int x=0; x<5; x++)
			total += arr[x][y];
		printf("Student %d: total %d average %.2f\n", y + 1, total, total / 5.0f);
	}
	printf("\n");

	printf("============= Quizs ==============\n");
	for (int x=0; x<5; x++)
	{
		min = INT32_MAX;
		max = INT32_MIN;
		total = 0;
		for (int y=0; y<5; y++)
		{
			if (min > arr[x][y])
				min = arr[x][y];
			else if (max < arr[x][y])
				max = arr[x][y];
			total += arr[x][y];
		}
		printf("Quiz %d: average %.2f high %d low %d\n", x + 1, total / 5.0f, max, min);
	}
	printf("\n");

	return 0;
}