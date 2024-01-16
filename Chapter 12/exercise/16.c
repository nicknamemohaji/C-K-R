/*
Q. Write a loop that prints the highest temperature reading stored in row i of the temperatures array (see Exercise 14)
for each day of the week. The loop body should call the find_largest function, passing it one row of the array at a time.
*/

#include <stdio.h>

extern int find_largest(int a[], int n);

int main(void)
{
    int temperatures[7][24];

    for (int i = 0; i < 7; i++)
        printf("%d ", find_largest(temperatures[i], 24));
}