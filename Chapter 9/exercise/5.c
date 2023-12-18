/*
Q. Write a function num_digits(n) that returns the number of digits in n (a positivie integer).

Hint: To determine the number of digits in a number n, divide by 10 repeatedly. 
When n reaches 0, the number of divisions indicates how many digits n originally had. 
*/

int num_digits(n)
{
	int count = 0;

	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count; 
}