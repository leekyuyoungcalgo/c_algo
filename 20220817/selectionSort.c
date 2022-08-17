#include<stdio.h>

int swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void main() {
	int list[] = { 5,2,7,8,4,9,5,1,2,4 };
	int size = sizeof(list) / sizeof(list[0]);
	int chnIdx = 0;
	for (size_t i = 0; i < size-1; i++)
	{
		int min = i;
		for (size_t t = i+1; t < size; t++)
		{
			if (list[t] < list[min])
				min = t;
		}		
		swap(&list[min], &list[i]);
	}
	// 정렬된 값 확인
	for (size_t i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n");


}