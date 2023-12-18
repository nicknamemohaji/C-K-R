/*
Q. Write a recusive version of the gcd function(see Exercise 3).
(...)

엥 exercise 3에서 이미 했는데..?ㅋㅋㅋㅋ
*/

int gcd(int m, int n)
{
	if (n == 0)
		return m;
	return gcd(n, m % n);
}