//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct Element
//{
//	int i; 
//	int j;
//	int x;
//};
//
//struct Sparse
//{
//	int m;
//	int n;
//	int nnz;
//	struct Element* ele;
//};
//
//void createSparse(struct Sparse* s)
//{
//	printf("Enter Dims: ");
//	scanf_s("%d%d", &s->m, &s->n);
//	printf("Number of non-zero: ");
//	scanf_s("%d", &s->nnz);
//
//	s->ele = (struct Element*)malloc(s->nnz * sizeof(struct Element));
//	printf("Enter all non-zero Elements: ");
//	for (int i  = 0; i < s->nnz; i++)
//	{
//		scanf_s("%d %d %d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
//	}
//}
//
//void Display(struct Sparse* s)
//{
//	int i, j, k = 0;
//
//	for (i = 0; i < s->m; i++)
//	{
//		for (j = 0; j < s->n; j++)
//		{
//			if (i == s->ele[k].i && j == s->ele[k].j)
//			{
//				printf("%d ", s->ele[k++].x);
//			}
//			else
//			{
//				printf("0 ");
//			}
//		}
//		printf("\n");
//	}
//}
//
//struct Sparse* add(struct Sparse* s1, struct Sparse* s2)
//{
//
//	struct Sparse* sum;
//
//	sum = (struct Sparse*)malloc(sizeof(struct Sparse));
//
//	sum->ele = (struct Element*)malloc((s1->nnz + s2->nnz) * sizeof(struct Element));
//
//	int i, j, k;
//	i = j = k = 0;
//
//	while (i < s1->nnz && j < s2->nnz)
//	{
//		if (s1->ele[i].i < s2->ele[j].i)
//		{
//			sum->ele[k++] = s1->ele[i++];
//		}
//		else if (s1->ele[i].i > s2->ele[j].i)
//		{
//			sum->ele[k++] = s2->ele[j++];
//		}
//		else
//		{
//			sum->ele[k] = s1->ele[i];
//			sum->ele[k++].x = s1->ele[i++].x + s1->ele[j++].x;
//		}
//	}
//
//	for (; i < s1->nnz; i++)
//	{
//		sum->ele[k++] = s1->ele[i];
//	}
//	for (; j < s2->nnz; j++)
//	{
//		sum->ele[k++] = s2->ele[j];
//	}
//
//	sum->m = s1->m;
//	sum->n = s1->n;
//	sum->nnz = k;
//}
//
//void freeSparse(struct Sparse* s)
//{
//	// Free elements
//	for (int i = 0; i < s->nnz; i++)
//	{
//		free(&s->ele[i]);
//	}
//
//	// free the matrix
//	free(&s);
//}
//
//int main()
//{
//
//	struct Sparse* s1, *s2, *s3;
//	
//	s1 = s2 = s3 = (struct Sparse*)malloc(sizeof(struct Sparse));
//
//	createSparse(s1);
//	createSparse(s2);
//
//	s3 = add(&s1, &s2);
//
//	Display(s1);
//	printf("+\n");
//	Display(s2);
//	printf("=\n");
//	Display(s3);
//
//	//freeSparse(s);
//
//	return 0;
//}