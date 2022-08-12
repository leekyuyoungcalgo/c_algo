// bubble sort
#include<stdio.h>
#include<stdlib.h>
// swap
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void showAray(int a[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void main() {
	const int MAX = 10;
	int ary[MAX] = {};
	for (size_t i = 0; i < MAX; i++)
	{
		ary[i] = (rand() % 100) + 1;
	}
	printf("정렬전 데이터 : \n");
	showAray(ary, MAX);

	for (size_t t = 0; t < MAX; t++)
	{
		for (size_t i = 0; i < MAX - 1; i++)
		{
			if (ary[i] > ary[i + 1])
				swap(&ary[i], &ary[i + 1]);
		}
	}
	printf("정렬후 데이터 : \n");
	showAray(ary, MAX);

}