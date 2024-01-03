//#include <stdlib.h>
//#include <stdio.h>
//
//void displayArray(int* p, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		printf("%d\t", p[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//
//	for (int i = 0; i < 5; i++)
//	{
//		p[i] = (i + 1) * (i + 1);
//	}
//	printf("P: ");
//	displayArray(p, 5);
//
//	int* q = (int*)malloc(10 * sizeof(int));
//	
//	for (int i = 0; i < 10; i++)
//	{
//		q[i] = p[i];
//	}
//	printf("Q: ");
//	displayArray(q, 10);
//
//	free(p);
//
//	p = q;
//	printf("P: ");
//	displayArray(p, 10);
//
//	q = NULL;
//	printf("Q: ");
//	displayArray(q, 10);
//
//	return 0;
//}