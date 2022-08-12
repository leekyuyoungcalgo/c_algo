/*
* 두 자연수 a b 둘 중에 큰 값을 a  12 18  18
* a % b = n  (18 % 12) 6
* n이 0일때 b가 최대 공약수* 
* 만약에 n != 0  a = b   b = n
*/
#include <stdio.h>
int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

void main() {
	int a, b;
	printf("정수를 입력하세요 ");
	scanf("%d", &a);
	printf("정수를 입력하세요 ");
	scanf("%d", &b);
	printf("최대공약수 %d\n", gcd(a, b));
}

