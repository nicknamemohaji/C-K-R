/*
Q. The following(rather confusing) function finds the median of three numbers. 
Rewrite the functino so that it has just one return function.

double median(double x, double y, double z)
{
	if (x <= y)
		if (y <= z) return y;
		else if (x <= z) return z;
		else return x;
	if (z <= y) return y;
	if (x <= z) return x;
	return z;
}
*/

double median(double x, double y, double z)
{
	double small, mid, big;

	if (x <= y)
	{
		if (y <= z) 
		{
			small = x;
			mid = y;
			big = z;
		}
		else if (x <= z)
		{
			small = x;
			mid = z;
			big = y;
		}
		else
		{
			small = z;
			mid = x;
			big = y;
		}
	}
	else
	{
		if (z <= y)
		{
			small = z;
			mid = y;
			big = x;
		}
		else if (x <= z)
		{
			small = y;
			mid = x;
			big = z;
		}
		else
		{
			small = y;
			mid = z;
			big = x;
		}
	}

	return mid;
}
