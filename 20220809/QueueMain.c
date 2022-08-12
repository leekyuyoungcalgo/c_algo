#include<stdio.h>
#include"Queue.h"
void main() {
	Queue q;
	if (InitQueue(&q, 64) == -1) {
		printf("메모리할당 실패");
		return;
	}
	while (1)
	{
		printf("현재 데이터수 %d,%d\v", Size(&q), Capacity(&q));
		printf("1.push 2.pop, 3,peek, 4,출력, 0 종료 :");
		int choiceMenu = 0;
		scanf("%d", &choiceMenu);
		if (choiceMenu == 0) return;
		int data = 0;
		switch (choiceMenu)
		{
		case 1:
			printf("데이터 : "); scanf("%d", &data);
			if (DeQueue(&q, &data) == -1) printf("실패\n");
			break;
		case 2:
			if (DeQueue(&q, &data) == -1) printf("실패\n");
			else printf("data : %d\n", data);
			break;
		case 3:
			if (Peek(&q, &data) == -1) printf("실패\n");
			else printf("data : %d\n", data);
			break;
		case 4:
			ShowAllQueue(&q);
			break;
		default:
			break;
		}
	}
}