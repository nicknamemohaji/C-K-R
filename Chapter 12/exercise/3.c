/*
Q. What will be the contents of the a array after the following statements are executed?
*/

#include <stdio.h>

int main(void)
{
    // Question >>>>
    #define N 10

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;

    while (p < q) {
        temp = *p;

        // 후위 연산자를 이용해 p는 a배열의 처음부터 증가, q는 a배열의 끝부터 감소
        // p가 q보다 커지면 반복문 종료. 즉, p와 q는 중간에서 만난다.
        *p++ = *q;          // 이때 p포인터가 가리키는 원소와
        *q-- = temp;        // q포인터가 가리키는 원소의 값을 서로 바꾼다.
        // 즉, 이 코드는 배열의 앞뒤를 바꾸는 코드이다.
    }
    // <<<<

    // Debug
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
}