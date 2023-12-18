/*
Q. Write a function check(x, y, n) that returns 1 if both x and y fall between n - 1, inclusive. The function should return 0 othewise.
Assume that x, y, and n are all of type int.
*/

int check(int x, int y, int n)
{
	return (1 <= x && x <= n - 1) && (1 <= y && y <= n - 1) ? 1 : 0;
}