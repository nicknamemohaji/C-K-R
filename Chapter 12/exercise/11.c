/*
Q. Modify the find_largest function so that it uses pointer arithmetic--not subscripting--to visit array elements.
*/

int find_largest(int a[], int n)
{
    int max = *a;
    for (; n > 0; a++, n--)
        if (*a > max)
            max = *a;
    return max;
}