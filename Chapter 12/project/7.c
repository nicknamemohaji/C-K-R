/*
Q. Modify the maxmin.c program of Section 11.4 so that the max_min function uses a pointer
instead of an integer to keep track of the current position in the array.
*/

#include <stdio.h>

# define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for (; n > 0; n--, a++) {
        if (*a > *max)
            *max = *a;
        else if (*a < *min)
            *min = *a;
    }
}