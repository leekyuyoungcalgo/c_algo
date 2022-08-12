#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
// 초기화
int InitQueue(Queue* q, int max) { 
	q->front = q->rear = q->num = 0;
	if ((q->que = calloc(max, sizeof(int))) == NULL) {
		q->capacity = 0;
		return -1;
	}
	q->capacity = max;
	return 0; 
}
// 인큐(데이터 삽입)
int EnQueue(Queue* q, int data) { 
	
	if (q->num <= q->rear) 	return -1;	
	else {
		q->num++;
		q->que[q->rear++] = data;					
		if (q->rear == q->capacity)
			q->rear = 0;
		return 0;
	}

}
// 디큐(데이터 추출)
int DeQueue(Queue* q, int* data) { 
	if (q->num <= 0) return - 1;
	else {
		q->num--;
		*data = q->que[q->front++];
		if (q->front == q->capacity) q->front = 0;		
		return 0;
	}	
}
int Peek(const Queue* q, int* data) { 
	if (q->num <= 0) return -1;
	*data = q->que[q->front];
	return 0;
}
// 데이터를 비운다는것은 초기화를 의미
void Clear(Queue* q) {
	q->front = q->rear = q->num = 0;
}
int Capacity(const Queue* q) { return q->capacity; }
int Size(const Queue* q) { return q->num; }
int IsEmpty(const Queue* q) { return q->num <= 0; }
int IsFull(const Queue* q) { return q->num >= q->capacity; }
int Search(const Queue* q, int searchData) {
	for (int i = 0; i < q->num; i++)
	{
		int idx = (i + q->front) % q->capacity;
		if (q->que[idx] == searchData) return idx;		 
	}
	return -1;
}
int ShowAllQueue(const Queue* q) { 
	for (int i = 0; i < q->num; i++)
	{
		int idx = (i + q->front) % q->capacity;
		printf("%d ", q->que[idx]);
	}
	printf("\n");
	
}
// 메모리 해제
void Terminate(Queue* q) {
	if (q->que != NULL)
		free(q->que);
	q->capacity = q->front = q->num = q->rear = 0;
}