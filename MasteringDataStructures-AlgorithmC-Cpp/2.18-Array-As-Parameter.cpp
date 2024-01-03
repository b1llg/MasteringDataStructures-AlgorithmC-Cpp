//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//
//// C++ func
//void fun(int* A, int n)
//{
//	std::cout << "A: " << A << std::endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << A[i] << std::endl;
//	}
//}
//
//// C func
//int* fun2(int n)
//{
//	int* p;
//	p = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++)
//	{
//		p[i] = (i + 1) * (i + 1);
//	}
//	return p;
//}
//
//int main()
//{
//
//	//Cpp func
//	int A[5] = { 1,2,3,4,5 };
//
//	fun(A, 5);
//
//	// C func
//	printf("\n\nC func:\n");
//	int* B = fun2(5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", B[i]);
//	}
//
//	free(B);
//
//	return 0;
//}