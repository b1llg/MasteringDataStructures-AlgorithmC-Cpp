//#include <stdio.h>
//
//long double e(int x, int n)
//{
//	long double s = 1;
//	int i;
//	double num = 1;
//	double den = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		num *= x;
//		den *= i;
//		s += num / den;
//	}
//
//	return s;
//}
//
//int main()
//{
//	printf("%0.16f", e(1, 20));
//
//	return 0;
//}