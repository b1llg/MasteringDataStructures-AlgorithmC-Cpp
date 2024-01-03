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
//int Lsearch(struct Array* arr, int x)
//{
//	if (x < arr->length)
//	{
//		for (int i = 0; i < arr->length; i++)
//		{
//			if (arr->A[i] == x)
//			{
//				return i;
//			}
//		}
//		return -1;
//	}
//	return -1;
//}
//
//int Bsearch(struct Array* arr, int x)
//{
//	int l, mid, h;
//	l = 0;
//	h = arr->length - 1;
//	while (l <= h)
//	{
//		mid = (l + h) / 2;
//		if (x == arr->A[mid])
//		{
//			return mid;
//		}
//		else if (x < arr->A[mid])
//			h = mid - 1;
//		else
//			l = mid + 1;
//	}
//	return -1;
//}
//
//void Swap(struct Array* arr, int i, int j)
//{
//	int temp = arr->A[i];
//	arr->A[i] = arr->A[j];
//	arr->A[j] = temp;
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
//
//	printf("%d\n", Lsearch(arr, 2));
//
//	//Swap(arr, 1, 4);
//
//	printf("%d\n", Bsearch(arr, 2));
//
//	free(arr);
//
//
//	return 0;
//}