#pragma once
#include<stdbool.h>
typedef struct 
{
	int max; // 최대 용량
	int ptr;  // index 번호
	int* stk;  // 스텍의 시작 지점(배열의 시작 주소 동적생성)
}Instack;

// 초기화
int Initialize(Instack* s, int max);
// push 데이터를 삽입
int Push(Instack* s, int x);
// pop 데이터를 가져옮
int Pop(Instack* s, int *x);
int Peek(const Instack* s, int* x);
int Clear(Instack* s);
int Capacity(const Instack* s);
int Size(const Instack* s);
int IsEmpty(const Instack* s);
int IsFull(const Instack* s);
int Search(const Instack* s, int x);
bool isSearch(const Instack* s, int x, int *idx);
void showAllStack(const Instack* s);
int Terminate( Instack* s);

