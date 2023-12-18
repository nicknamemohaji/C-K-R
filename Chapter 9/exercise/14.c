/*
Q. The following function is supposed to return true if any element of the array a has the value 0 and false if all elements are nonzero. 
Sadly, it contains an error. Find the error and show how to fix it:

bool has_zero(int a[], int n)
{
	int i;

	for (i=0; i<n; i++)
		if (a[i] == 0)
			return true;
		else
			return false;
}
*/

#include <stdbool.h>
bool has_zero(int a[], int n)
{
	int i;

	for (i=0; i<n; i++)
		// else 분기에서 곧바로 return statement를 사용하므로 하나의 원소만 확인하게 된다.
		if (a[i] == 0)
			return true;
	// 만약 배열의 모든 원소를 확인했지만 조기 종료되지 않았으면 (= 0이 발견되지 않았으면) 그때 false를 반환해야 한다.
	// * C이므로 들여쓰기는 상관없다는 것에 주의. else statement 자체를 없애야 한다. 
	return false;
}