#include<stdio.h>
// x ~ y from to
void move(int no, int x, int y) {
	if (no > 1)
		move(no - 1, x, 6 - x - y);  // ���ۿ��� �߰����� ����
	printf("���� %d -> %d��տ��� %d ������� �ű�\n",no, x, y);
	if (no > 1)
		move(no - 1, 6 - x - y, y);  // �߰����� ���������� ����
}
void main() {
	int n;
	printf("������ ���� : ");
	scanf("%d", &n);
	move(n, 1, 3);
}