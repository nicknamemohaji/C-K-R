/*
Q. The following function, which computes the area of a triangle, contains two errors. Locate the errors and show how to fix them. 

double triangle_area (double base, height)
double product;
{
	product = base * height;
	return product / 2;
}
*/

double triangle_area (double base, double height)	// 1. argument를 선언할 때 모든 인자에 대해 자료형을 명시하지 않았다. 
{
	// 2. 변수 product를 declaration하는 부분이 function body에 있지 않다.
	double product;
	
	product = base * height;
	return product / 2;
}
