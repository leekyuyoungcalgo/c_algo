#include<stdio.h>
#include"Queue.h"
void main() {
	Queue q;
	if (InitQueue(&q, 64) == -1) {
		printf("�޸��Ҵ� ����");
		return;
	}
	while (1)
	{
		printf("���� �����ͼ� %d,%d\v", Size(&q), Capacity(&q));
		printf("1.push 2.pop, 3,peek, 4,���, 0 ���� :");
		int choiceMenu = 0;
		scanf("%d", &choiceMenu);
		if (choiceMenu == 0) return;
		int data = 0;
		switch (choiceMenu)
		{
		case 1:
			printf("������ : "); scanf("%d", &data);
			if (DeQueue(&q, &data) == -1) printf("����\n");
			break;
		case 2:
			if (DeQueue(&q, &data) == -1) printf("����\n");
			else printf("data : %d\n", data);
			break;
		case 3:
			if (Peek(&q, &data) == -1) printf("����\n");
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