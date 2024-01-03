//#include <stdlib.h>
//#include <stdio.h>
//
//
//struct Queue
//{
//	int size; 
//	int front;
//	int rear;
//	int* Q;
//
//};
//
//void create(struct Queue* q, int size)
//{
//	q->size = size;
//	q->front = q->rear = -1;
//	q->Q = (int*)malloc(q->size * sizeof(int));
//}
//
//
//void equeue(struct Queue*q ,int x)
//{
//	if (q->rear == q->size - 1)
//	{
//		printf("Queue is full\n");
//	}
//	q->rear++;
//	q->Q[q->rear] = x;
//}
//
//int dqueue(struct Queue* q)
//{
//	int x = -1;
//
//	if (q->front == q->rear)
//	{
//		printf("Queue is empty\n");
//	}
//	else
//	{
//		q->front++;
//		x = q->Q[q->front];
//	}
//	return x;
//}
//
//void display(struct Queue* q)
//{
//	for (int i = q->front + 1; i <= q->rear; i++)
//	{
//		printf("%d ", q->Q[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
//	create(q, 5);
//
//	equeue(q, 10);
//	equeue(q, 20);
//	equeue(q, 30);
//	equeue(q, 40);
//	equeue(q, 50);
//
//	display(q);
//
//	printf("%d ", dqueue(q));
//
//	display(q);
//
//	equeue(q, 54);
//	equeue(q, 54);
//	equeue(q, 78);
//
//	return 0;
//}