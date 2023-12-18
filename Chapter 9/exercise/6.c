/*
Q. Write a function digit(n, k) that returns kth digit(from the right) in n(a positiva integer).

For example, digit(829, 1) returns 9, digit(829, 2) returns 2, and digit(829, 3) returns 8. 
If k is greater than number of digits in n, have the function return 0
*/

int digit(int n, int k)
{
	while (k > 1 && n > 0)
	{
		n /= 10;
		k--;
	}
	// k가 자리수보다 큰 경우 n == 0인 조건에서 탈출할 것이므로 별도의 처리를 해 줄 필요가 없다.
	// (k == 0인 경우는 UB)
	return n % 10;
}