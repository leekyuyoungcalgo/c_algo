// ���ǥ������ �� ����� ǥ��
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
	printf("������ �Է� : ");
	scanf("%d", &x);
	recursive(x);

}