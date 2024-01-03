//#include <stdio.h>
//
//long double exp(int x, int n)
//{
//	static long double s;
//
//	if (n == 0)
//	{
//		return s;
//	}
//	else
//	{
//		s = 1 + x * s/n;
//		return exp(x, n - 1);
//	}
//
//}
//
//int main()
//{
//
//	printf("%lf",exp(2, 20));
//
//	return 0;
//}