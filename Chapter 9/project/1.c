/*
Q. Write a program that asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function selection_sort.
When given an array with n elements, selection_sort must do the following.
(...)
*/

#include <stdio.h>
#include <stdint.h>

# define SIZE 10

void selection_sort(int arr[], int n);

int main(void)
{
	int arr[SIZE];

	printf("Enter %d integers: ", SIZE);
	for (int i=0; i<SIZE; i++)
		scanf("%d", &arr[i]);
	
	selection_sort(arr, SIZE);

	printf("After sorting: ");
	for(int i=0; i<SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

void selection_sort(int arr[], int n)
{
	int local_max, max_pos;

	for (int i=0; i<n; i++)
	{
		local_max = INT32_MIN;
		max_pos = -1;
		for (int j=0; j<(n - i); j++)
		{
			if (local_max < arr[j])
			{
				max_pos = j;
				local_max = arr[j];
			}
		}
		arr[max_pos] = arr[(n - i) - 1];
		arr[(n - i) - 1] = local_max;
	}
}