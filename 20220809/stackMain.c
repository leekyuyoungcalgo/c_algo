#include<stdio.h>
#include"instack.h"
void main()
{
	Instack s;
	if (!Initialize(&s, 64)) printf("실패");
	while (1)
	{
		printf("현재 데이터수 %d,%d\v", Size(&s), Capacity(&s));
		printf("1.push 2.pop, 3,peek, 4,출력, 0 종료 :");
		int choiceMenu = 0;
		scanf("%d", &choiceMenu);
		if (choiceMenu == 0) break;

		int data = 0;
		switch (choiceMenu)
		{
		case 1:
			printf("push data :");
			scanf("%d", &data);
			if(!Push(&s, data)) printf("실패\n");
			break;
		case 2:			
			if (!Pop(&s, &data)) printf("실패\n");
			else printf("%d\n", data);
			break;
		case 3:
			if (!Peek(&s, &data)) printf("실패\n");
			else printf("%d\n", data);
			break;
		case 4:
			showAllStack(&s);
			break;
		default:
			break;
		}
	}

}