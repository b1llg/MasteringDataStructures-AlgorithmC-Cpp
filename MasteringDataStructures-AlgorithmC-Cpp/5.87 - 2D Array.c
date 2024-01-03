//#include <stdio.h>
//#include <stdlib.h>
//
//void displayArray(int** p, int n);
//
//
//void displayArray(int** p, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d\t", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int A[2][2] = { {1,2},{3,4} };
//
//	int** B = (int*)malloc(2 * sizeof(int));
//
//	for (int i = 0; i < 2; i++)
//	{
//		B[i] = (int*)malloc(2 * sizeof(int));
//	}
//	B[0][0] = 1;
//	B[0][1] = 2;
//	B[1][0] = 3;
//	B[1][1] = 4;
//	
//	displayArray(B, 2);
//
//	for (int i = 0; i < 2; i++)
//	{
//		free(B[i]);
//	}
//
//
//
//
//
//
//	return 0;
//}