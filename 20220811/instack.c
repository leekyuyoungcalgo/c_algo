#include<stdio.h>
#include<stdlib.h>
#include "instack.h"

int Initialize(Instack* s, int max)
{
	//(* s).ptr
	s->ptr = 0;
	s->stk = (int*)calloc(max, sizeof(int));
	if (s->stk == NULL) {
		s->max = 0;
		return 0;
	}

	s->max = max;
	return 1;
}
// push 데이터를 푸시
int Push(Instack* s, int x) {
	if (s->ptr >= s->max)
		return 0;
	s->stk[s->ptr++] = x;
	return 1;

}
// pop 데이터를 가져옮
int Pop(Instack* s, int* x) {
	if (s->ptr <= 0)
		return 0;
	*x = s->stk[--s->ptr];
	return 1;
}
int Peek(const Instack* s, int* x) {
	if (s->ptr <= 0)
		return 0;
	*x = s->stk[s->ptr - 1];
	return 1;

}
int Clear(Instack* s) {
	s->ptr = 0;
	return 1;
}
int Capacity(const Instack* s) {
	return s->max;
}
int Size(const Instack* s) {
	return s->ptr;
}
int IsEmpty(const Instack* s) {
	return s->ptr <= 0;
}
int IsFull(const Instack* s) {
	return s->ptr >= s->max;
}
int Search(const Instack* s, int x) {
	for (int i = s->ptr - 1; i >= 0; i--)
	{
		if (s->stk[i] == x)
			return i;
	}
	return -1;
}
bool isSearch(const Instack* s, int x, int* idx)
{
	for (int i = s->ptr - 1; i >= 0; i--)
	{
		if (s->stk[i] == x)
			*idx = i;
		return true;
	}
	return false;
}
void showAllStack(const Instack* s)
{
	for (size_t i = 0; i < s->ptr; i++)
	{
		printf("%d\n", s->stk[i]);
	}
}

int Terminate(Instack* s) {
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}
