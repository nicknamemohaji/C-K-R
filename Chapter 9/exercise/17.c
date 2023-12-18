/*
Q. Rewrite the fact function so that it's no longer recusive. 
*/

int fact(int n)
{
	int sum = n--;

	while (n >= 1)
	{
		sum *= n;
		n--;
	}
	return n;
}