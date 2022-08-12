#include <stdio.h>
// 2 - 1 2
// 3- 1 2 3 1
// 4- 1 2 3 1 4 1 2 
void recursive(int n) {
	if (n > 0) {
		recursive(n - 1);
		printf("%d\n", n);
		recursive(n - 2);
	}
}
void main() {
	int x;
	printf("정수를 입력:");
	scanf("%d", &x);
	recursive(x);
}