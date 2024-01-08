/*
Q. Write the following function:
    void swap(int *p, int *q);

When passed the addresses of two variables, swap should exchange the values of the variables.
*/

void swap(int *p, int *q)
{
    int temp;

    temp = *p;  // *p에 *q의 값을 대입하면 *p의 값이 사라지므로 temp에 *p의 값을 저장
    *p = *q; 
    *q = temp;  // 이후 temp에 저장된 *p의 원래 값을 *q에 대입
}