//#include <stdio.h>
//
//
//double exp(int x, int n)
//{
//	static double p ,f;
//	double r;
//	p = f = 1;
//
//	if (n == 0)
//	{
//		return 1;
//	}
//	r = exp(x, n - 1);
//	p = p * x;
//	f = f * n;
//	return r + p / f;
//}
//
//int main()
//{
//	printf("%lf", exp(2, 500));
//
//	return 0;
//}