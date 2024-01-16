/*
Q. Write the following function
    void find_two_largest(const int *a, int n, int *largest, int *second_largest);

a points to an array of length n. 
The function searches the array for its largest and second-largest elements, 
storing them in the variables pointed to by largest and second_largest, respectively. 

Use pointer arithmetic--not subscripting--to visit array elements.
*/

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    *largest = *second_largest = *a;
    for (; n > 0; a++, n--)
    {
        if (*a > *largest)
        {
            *second_largest = *largest;
            *largest = *a;
        }
        else if (*a > *second_largest)
            *second_largest = *a;
    }
}