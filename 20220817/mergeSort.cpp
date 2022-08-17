#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

static int* buff;  // static 영역 heap영역이 프로그램에서 공유

static void _mergeSort(int a[], int left, int right) {
	if (left < right) {
		int center = (left + right) / 2;
		int p = 0;
		int i, j = 0;
		int k = left;

		_mergeSort(a, left, center); // 왼쪽 정렬
		_mergeSort(a, center + 1, right); // 오른쪽 정렬

		for (i = left; i <= center; i++)
			buff[p++] = a[i];

		while (i <= right && j < p)
			a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];

		while (j < p)
			a[k++] = buff[j++];		
	}
}

//병합 정렬
void mergetSort(int a[], int length) {	

	if ((buff = (int*)calloc(length, sizeof(int))) == NULL)
		return;
	_mergeSort(a, 0, length - 1);
	free(buff);
}

void main() {
	printf("머지정렬\n");
	printf("요소의 개수 : ");
	int nx;
	scanf("%d", &nx);
	int* x = (int*)calloc(nx, sizeof(int));
	for (size_t i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	mergetSort(x, nx);

	for (size_t i = 0; i < nx; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	free(x);
}