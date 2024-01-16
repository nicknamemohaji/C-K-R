/*
Q. Section 8.2 had a program fragment in which two nested for loops initialized the array ident for use as an identity matrix.
Rewrite this code, using a single pointer to step through the array one element at a time.
*/

#define N 10

int main(void)
{
    double ident[N][N];

    double *p;
    int zeros = N;
    for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
    {
        if (zeros == N)
        {
            *p = 1.0;
            zeros = 0;
        }
        else
        {
            zeros++;
            *p = 0.0;
        }
    }
}
