/*
Q. Write a function that return the following values. 
(Assume that a and n are parameters, where a is an array of int values and n is the length of the array)
*/

#include <stdint.h>

// (a) The largest element in a
int largest_elem(int arr[], int n)
{
	int largest = INT32_MIN;

	for (int i=0; i<n; i++)
		if (arr[i] > largest)
			largest = arr[i];
	
	return largest;
}

// (b) The average of all elements in a
double average_all_elem(int arr[], int n)
{
	int sum = 0;

	for (int i=0; i<n; i++)
		sum += arr[i];
	
	return (double) sum / (double) n;
}

// (c) The number of positive elements in a
int positive_elem(int arr[], int n)
{
	int count = 0;

	for (int i=0; i<n; i++)
		if (arr[i] > 0)
			count++;
	
	return count;
}
