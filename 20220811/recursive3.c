// ���ǥ������ �� ����� ǥ��
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
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x);
	//recursive(x);
}