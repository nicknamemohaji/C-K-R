/*
Q. The following function supposedly computes the sum and average or the numbers
int the array a, which has length n. avg and sum point to variables that the function 
should modify.

Unfortunately, the function contains several errors; find and correct them.
*/

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    // sum = 0.0;
    *sum = 0.0;     // sum은 포인터 변수이므로 *sum으로 수정
    for (i = 0; i < n; i++)
        // sum += a[i];
        *sum += a[i];   // 마찬가지로 sum은 포인터 변수이므로 *sum으로 수정해서 산술대입 연산자 사용
    // avg = sum / n;
    *avg = *sum / n;    // avg도 포인터 변수이므로 *avg로 수정
}
