/*
Q. Assume that the following array contains a week's worth of hourly temperature readings, 
with each row containing the readings for one day:
    int temparatures[7][24];

Write a statement that uses the search function (see Exercise 7) to search the entire array for the value 32.
*/

#include <stdbool.h>

extern bool search(const int a[], int n, int key);
int temparatures[7][24];

int main(void)
{
    bool found = false;
    for (int i = 0; i < 7 && !found; i++)
    {
        if(search(temparatures[i], 24, 32))
            found = true;
    }
}