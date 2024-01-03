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
//void Merge(struct Array* arr, struct Array* subarr1, struct Array* subarr2)
//{
//	int i, j, k;
//
//	i = j = k = 0;
//	// k -> arr
//	// i -> subarr1
//	// j -> subarr2
//
//	do
//	{
//		if (i >= subarr1->length - 1)
//		{
//			while (j < subarr2->length)
//			{
//				arr->A[k] = subarr2->A[j];
//				j++;
//				k++;
//			}
//		}
//		else if (j >= subarr2->length - 1)
//		{
//			while (i < subarr1->length)
//			{
//				arr->A[k] = subarr1->A[i];
//				i++;
//				k++;
//			}
//		}
//		if (subarr1->A[i] < subarr2->A[j])
//		{
//			arr->A[k] = subarr1->A[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			arr->A[k] = subarr2->A[j];
//			j++;
//			k++;
//		}
//		if (k >= arr->length)
//		{
//			if (j > i)
//			{
//				arr->A[k - 1] = subarr1->A[i];
//			}
//			else
//			{
//				arr->A[k - 1] = subarr2->A[j];
//			}
//		}
//	} while (k < arr->length);
//}
//
//
//int main()
//{
//	int n = 5;
//	struct Array* arr1 = (struct Array*)malloc(sizeof(struct Array));
//	struct Array* arr2 = (struct Array*)malloc(sizeof(struct Array));
//	struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
//
//	// Array 1
//	arr1->A = (int*)malloc(n * sizeof(int));
//	arr1->A[0] = 1;
//	arr1->A[1] = 14;
//	arr1->A[2] = 36;
//	arr1->A[3] = 55;
//	arr1->A[4] = 56;
//
//	arr1->length = n;	
//
//	Display(arr1);
//	
//	// Array 2
//	arr2->A = (int*)malloc(n * sizeof(int));
//	arr2->A[0] = 2;
//	arr2->A[1] = 8;
//	arr2->A[2] = 33;
//	arr2->A[3] = 55;
//	arr2->A[4] = 56;
//
//	arr2->length = n;
//
//	Display(arr2);
//
//	// Merge
//
//	arr3->A = (int*)malloc(2*n * sizeof(int));
//	arr3->length = 2 * n;
//
//	Merge(arr3, arr1, arr2);
//
//	Display(arr3);
//
//	return 0;
//}