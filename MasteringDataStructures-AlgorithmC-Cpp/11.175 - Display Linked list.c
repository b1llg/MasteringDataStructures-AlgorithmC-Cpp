//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//
//struct Node
//{
//	int data;
//	struct nodes* next;
//}*first;
//
//
//void create(int A[], int n)
//{
//	int i;
//	struct Node* temp, *last;
//
//	first = (struct Nodes*)malloc(sizeof(struct Node));
//	first->data = A[0];
//	first->next = NULL;
//	last = first;
//
//	for (i = 1; i < n; i++)
//	{
//		temp = (struct Node*)malloc(sizeof(struct Node));
//		temp->data = A[i];
//		temp->next = NULL;
//		last->next = temp;
//		last = temp;
//	}
//}
//
//void Display(struct Node* p)
//{
//	if (p != NULL)
//	{
//		printf("%d ", p->data);
//		Display(p->next);
//	}
//	else
//	{
//		printf("\n");
//	}
//
//}
//
//int Count(struct Node* p)
//{
//	int count = 0;
//
//	while (p)
//	{
//		count++;
//		p = p->next;
//	}
//	return count;
//}
//
//int Sum(struct Node* p )
//{
//	int res = 0;
//
//	while (p)
//	{
//		res += p->data;
//		p = p->next;
//	}
//
//	return res;
//}
//
//struct Node* Max(struct Node* p)
//{
//	struct Node* res = (struct LLMax*)malloc(sizeof(struct Node));
//
//	res->data = INT_MIN;
//
//	while (p)
//	{
//		if (p->data > res->data)
//		{
//			res = p;
//		}
//		p = p->next;
//	}
//
//	return res;
//}
//
//bool Insert(struct Node* p, int val, int ind)
//{
//	int count = 1;
//
//	if (ind < 1)
//	{
//		return false;
//	}
//
//	while (count != ind - 1)
//	{
//		p = p->next;
//		count++;
//	}
//
//	// generate a new node with val
//	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//	new_node->data = val;
//	// Add next element adress in new node
//	new_node->next = p->next;
//
//	// Set next element as new element in current node
//	p->next = new_node;
//
//	return true;
//}
//
//bool Delete(struct Node* p, int ind)
//{
//	int count = 1;
//	struct Node* p_save = p;
//
//
//	if (ind < 1)
//	{
//		return false;
//	}
//
//	while (count != ind)
//	{
//		count++;
//		p_save = p;
//		p = p->next;
//	}
//
//	// Change last node's next node
//	p_save->next = p->next;
//
//	// Delete current node
//	free(p);
//
//	return true;
//
//}
//
//bool Reverse1(struct Node* p)
//{
//	int* A, i=0;
//	struct Node* q=p;
//
//	A = (int*)malloc(sizeof(int)*Count(p));
//
//	while (q != NULL)
//	{
//		A[i] = q->data;
//		q = q->next;
//		i++;
//	}
//	q = p;
//	i--;
//	while (q != NULL)
//	{
//		q->data = A[i];
//		q = q->next;
//		i--;
//	}
//
//}
//
//void Reverse2(struct Node* p)
//{
//	struct Node* q = NULL, * r = NULL;
//
//	while (p != NULL)
//	{
//		r = q;
//		q = p;
//		p = p->next;
//		q->next = r;
//	}
//	first = q;
//}
//
//
//void Reverse3(struct Node* q, struct Node* p)
//{
//	if (p)
//	{
//		Reverse3(p, p->next);
//		p->next = q;
//
//	}
//	else
//	{
//		first = q;
//	}
//}
//
//int main()
//
//{
//	int A[] = { 3,5,7,1,0,15 };
//
//	create(A, 6);
//
//	Display(first);
//
//	printf("Total number of elements: %d\n", Count(first));
//
//	printf("Sum of elements: %d\n", Sum(first));
//
//	struct Node* max = Max(first);
//
//	printf("Largest Element: %d - %p\n", max->data, max);
//
//	Display(first);
//
//	Insert(first, 154, 3);
//
//	Display(first);
//
//	Delete(first, 5);
//
//	Display(first);
//
//	Reverse1(first);
//	
//	Display(first);
//
//	Reverse2(first);
//
//	Display(first);
//
//	Reverse3(NULL, first);
//
//	Display(first);
//
//	free(first);
//
//	return 0;
//}