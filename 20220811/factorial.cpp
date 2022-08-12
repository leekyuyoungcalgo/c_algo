#include <stdio.h>
// factorial 함수
unsigned long factorial(int n) {
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
	
}

void main() {
	unsigned long result = 0;
	unsigned int x = 0;
	printf("정수를 입력 : ");
	scanf("%d", &x);
	result = factorial(x);
	printf("%d의 팩토리얼 값은 : %ld\n", x, result);
}