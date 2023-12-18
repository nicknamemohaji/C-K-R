/*
Q. Write a function gcd(m, n) that calculates the greates common divisors of the integers m and n.
*/

int gcd(int m, int n)
{
	if (n == 0)
		return m;
	return gcd(n, m % n);
}

// // 재귀를 사용하지 않고 반복으로 처리한 버전
// int gcd(int m, int n)
// {
// 	int temp;
// 	while (n != 0)
// 	{
// 		temp = m % n;
// 		m = n;
// 		n = temp;
// 	}
// 	return m; 
// }