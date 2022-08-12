// 재귀표현에서 비 재귀적 표현
// goto
#include<stdio.h>
void recursive(int n) {
Top:
	if (n > 0) {
		recursive(n - 1);
		printf("%d\n", n);	
		n -= 2;
		goto Top;
	}
}

void main() {
	int x;
	printf("정수를 입력 : ");
	scanf("%d", &x);
	recursive(x);

}