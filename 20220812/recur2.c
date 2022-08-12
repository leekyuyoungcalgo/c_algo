#include <stdio.h>
#include "InStack.h"

void recur(int n) {
	IntStack stk;
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
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);
	recur(x);

}