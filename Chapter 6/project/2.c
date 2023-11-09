/*
Q. Write a program that asks the user to enter two integers, then calculates and displays their GCD

Hint: Euclid's algorithm.
*/

#include <stdio.h>

int main(void)
{
	int	n1, n2, temp;
	
	printf("Enter two integers: ");
	scanf("%d%d", &n1, &n2);

	while (n2 != 0)			// n2 > n1 이면 n1 % n2 == n1이므로 첫 반복에서 n1->n2, n2->n1으로 서로 바뀜. 따로 바꿔줄 필요 없음
	{
		temp = n1 % n2;
		n1 = n2;
		n2 = temp;
	}
	printf("Greatest common diviser: %d\n", n1);
}