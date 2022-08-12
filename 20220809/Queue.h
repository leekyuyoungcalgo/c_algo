#pragma once
#ifndef ___Queue
#define ___Queue
typedef struct 
{
	int* que; // 동적배열 생성
	int capacity;
	int rear;	// 다음 데이터가 들어갈 인덱스
	int front;	// 데이터 인출에 사용되는 인덱스
	int num; // 실제 들어있는 데이터의 수
}Queue;
// 초기화
int InitQueue(Queue* q, int max);
// 인큐(데이터 삽입)
int EnQueue(Queue* q, int data);
// 디큐(데이터 추출)
int DeQueue(Queue* q, int *data);
int Peek(const Queue* q, int* data);
void Clear(Queue* q);
int Capacity(const Queue* q);
int Size(const Queue* q);
int IsEmpty(const Queue* q);
int IsFull(const Queue* q);
int Search(const Queue* q, int searchData);
void ShowAllQueue(const Queue* q);
void Terminate(Queue* q);

#endif // !___Queue

