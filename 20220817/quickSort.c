#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void quick(int a[], int left, int right) {
	int pl = left, pr = right, x = a[(left + right) / 2];
	while (pl<=pr)
	{
		while (a[pl] < x) pl++;
		while (a[pr] > x) pr--;
		if (pl <= pr) {
			swap(&a[pl], &a[pr]);
			pl++; pr--;
		}
	}
	if (left < pr) quick(a, left, pr);
	if (pl < right) quick(a, pl, right);
}
void main() {
	printf("퀵정렬\n");
	printf("요소의 개수 : ");
	int nx;
	scanf("%d", &nx);
	int* x = (int*)calloc(nx, sizeof(int));
	for (size_t i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	quick(x, 0, nx - 1);

	for (size_t i = 0; i < nx; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");


	free(x);

}

