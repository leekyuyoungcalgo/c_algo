/*
* �� �ڿ��� a b �� �߿� ū ���� a  12 18  18
* a % b = n  (18 % 12) 6
* n�� 0�϶� b�� �ִ� �����* 
* ���࿡ n != 0  a = b   b = n
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
	printf("������ �Է��ϼ��� ");
	scanf("%d", &a);
	printf("������ �Է��ϼ��� ");
	scanf("%d", &b);
	printf("�ִ����� %d\n", gcd(a, b));
}

