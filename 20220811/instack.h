#ifndef ___instack
#define ___instack
#include<stdbool.h>
typedef struct
{
	int max; // �ִ� �뷮
	int ptr;  // index ��ȣ
	int* stk;  // ������ ���� ����(�迭�� ���� �ּ� ��������)
}Instack;

// �ʱ�ȭ
int Initialize(Instack* s, int max);
// push �����͸� ����
int Push(Instack* s, int x);
// pop �����͸� ������
int Pop(Instack* s, int* x);
int Peek(const Instack* s, int* x);
int Clear(Instack* s);
int Capacity(const Instack* s);
int Size(const Instack* s);
int IsEmpty(const Instack* s);

int IsFull(const Instack* s);
int Search(const Instack* s, int x);

bool isSearch(const Instack* s, int x, int* idx);
void showAllStack(const Instack* s);
int Terminate(Instack* s);
#endif
