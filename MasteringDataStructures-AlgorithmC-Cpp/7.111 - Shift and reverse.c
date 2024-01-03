//#include <stdlib.h>
//#include <stdio.h>
//
//struct Array
//{
//	int length;
//	int* A;
//
//};
//
//void Display(struct Array* arr)
//{
//	for (int i = 0; i < arr->length; i++)
//	{
//		printf("%d\t", arr->A[i]);
//	}
//	printf("\n");
//}
//
//void Swap(struct Array* arr, int i, int j)
//{
//	int temp = arr->A[i];
//	arr->A[i] = arr->A[j];
//	arr->A[j] = temp;
//}
//
//void Reverse(struct Array* arr)
//{
//	int i, j;
//	i = 0;
//	j = arr->length - 1;
//
//	while (j != i)
//	{
//		Swap(arr, i, j);
//		i++;
//		j--;
//	}
//}
//
//void Lshift(struct Array* arr)
//{
//	int temp = arr->A[0];
//
//	for (int i = 0; i < arr->length; i++)
//	{
//		arr->A[i] = arr->A[i + 1];
//	}
//
//	arr->A[arr->length - 1] = temp;
//}
//
//
//void Rshift(struct Array* arr)
//{
//	int temp = arr->A[arr->length-1];
//
//	for (int i = arr->length-1; i > 0; i--)
//	{
//		arr->A[i] = arr->A[i - 1];
//	}
//
//	arr->A[0] = temp;
//}
//
//int main()
//{
//	int n = 5;
//	struct Array* arr = (struct Array*)malloc(sizeof(struct Array));
//
//	arr->A = (int*)malloc(n * sizeof(int));
//	arr->A[0] = 1;
//	arr->A[1] = 2;
//	arr->A[2] = 3;
//	arr->A[3] = 4;
//	arr->A[4] = 5;
//
//	arr->length = 5;
//
//	Display(arr);
//	Reverse(arr);
//	Display(arr);
//	Lshift(arr);
//	Display(arr);
//	Rshift(arr);
//	Display(arr);
//
//
//
//
//	return 0;
//}