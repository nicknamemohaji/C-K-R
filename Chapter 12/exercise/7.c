/*
Q. Write the following function:
    bool search(const int a[], int n, int key);

a is an array to be searched, n is the number of elements in the array, and key is the search key.
search should return true if key matches some element of a, and false if it doesn't.

Use pointer arithmetic--not subscripting--to visit array elements.
*/

#include <stdbool.h>

bool search(const int a[], int n, int key)
{
    for (; n > 0; a++, n--)
        if (*a == key)
            return true;
    return false;
}
