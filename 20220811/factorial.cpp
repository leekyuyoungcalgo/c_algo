#include <stdio.h>
// factorial �Լ�
unsigned long factorial(int n) {
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
	
}

void main() {
	unsigned long result = 0;
	unsigned int x = 0;
	printf("������ �Է� : ");
	scanf("%d", &x);
	result = factorial(x);
	printf("%d�� ���丮�� ���� : %ld\n", x, result);
}