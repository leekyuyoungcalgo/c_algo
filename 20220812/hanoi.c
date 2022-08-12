#include<stdio.h>
// x ~ y from to
void move(int no, int x, int y) {
	if (no > 1)
		move(no - 1, x, 6 - x - y);  // 시작에서 중간으로 가는
	printf("원반 %d -> %d기둥에서 %d 기둥으로 옮기\n",no, x, y);
	if (no > 1)
		move(no - 1, 6 - x - y, y);  // 중간에서 마지막으로 가는
}
void main() {
	int n;
	printf("원반의 갯수 : ");
	scanf("%d", &n);
	move(n, 1, 3);
}