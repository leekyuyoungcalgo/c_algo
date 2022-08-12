// 재귀표현에서 비 재귀적 표현
// stack

#include<stdio.h>
#include "temp.h"
void recursive(int n) {
	Instack stk;
	Initialize(&stk, 100);
Top:
	if (n > 0) {
		Push(&stk, n);
		n -= 1;
		goto Top;
	}
	if (!IsEmpty(&stk)) {
		Pop(&stk, &n);
		printf("%d\n", n);
		n -= 2;
		goto Top;
	}
	Terminate(&stk);
}

void main() {	
	int x;
	printf("정수를 입력하세요 : ");
	scanf("%d", &x);
	//recursive(x);
}