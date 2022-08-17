#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b) {
	/*int temp = *a;
	*a = *b;
	*b = temp;*/
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

// heap 구조를 만들어주는 함수 - tree를 바탕으로 heap
static void downheap(int a[], int left, int right) {
	int temp = a[left];
	int child, parent;
	for (parent = left; parent < (right+1) / 2; parent = child)
	{
		int cl = parent * 2 + 1;
		int cr = cl + 1;
		child = (cr <= right && a[cr] > a[cl]) ? cr : cl; // 큰 값을 선택
		if (temp >= a[child])
			break;
		a[parent] = a[child];
	}
	a[parent] = temp;
}

// heap sort
void heapSort(int a[], int length) {
	for (int i = (length-1)/2; i >=0 ; i--)
	{
		downheap(a, i, length - 1); // 비 재귀적 표현방법
	}

	for (int i = length - 1; i > 0; i--) {
		swap(&a[0], &a[i]);
		downheap(a, 0, i - 1);
	}
}

void main() {
	printf("힙정렬\n");
	printf("요소의 개수 : ");
	int nx;
	scanf("%d", &nx);
	int* x = (int*)calloc(nx, sizeof(int));
	for (size_t i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	heapSort(x, nx);

	for (size_t i = 0; i < nx; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	free(x);
}
