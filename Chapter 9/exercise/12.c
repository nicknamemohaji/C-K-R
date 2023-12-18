/*
Q. Write the following function: 
	double inner_product(double a[], double b[], int n);

(...)
*/

double inner_product(double a[], double b[], int n)
{
	double sum = 0.0;

	for (int i=0; i<n; i++)
		sum += a[i] * b[i];
	return sum;
}