#pragma once
#ifndef ___Queue
#define ___Queue
typedef struct 
{
	int* que; // �����迭 ����
	int capacity;
	int rear;	// ���� �����Ͱ� �� �ε���
	int front;	// ������ ���⿡ ���Ǵ� �ε���
	int num; // ���� ����ִ� �������� ��
}Queue;
// �ʱ�ȭ
int InitQueue(Queue* q, int max);
// ��ť(������ ����)
int EnQueue(Queue* q, int data);
// ��ť(������ ����)
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

