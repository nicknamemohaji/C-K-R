/*
Q. Write a loop that prints all temperature readings stored in row i of the temperatures array (see Exercise 14).
Use a pointer to visit each element of the row.
*/

#include <stdio.h>

int main(void)
{
    int temperatures[7][24];

    int i = 5;  // 읽을 행 인덱스
    for (int *p = temperatures[i]; p < temperatures[i] + 24; p++)
        printf("%d ", *p);
}