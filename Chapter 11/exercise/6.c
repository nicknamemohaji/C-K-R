/*
Write the following function:
    void find_two_largest(int a[], int n, int *largest, int *second_largest);

When passed an array a of length n, the function will search a for its largest and second-largest
elements, storing them in the variables pointed to by largest and second_largest, respectively.
*/

#include <stdint.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = INT32_MIN;
    *second_largest = INT32_MIN;
    for (i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}