#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���� ���� �Լ�
void fsort(int a[], int n, int max) {
	int* f = (int*)calloc(max + 1, sizeof(int)); 
	int* b = (int*)calloc(n, sizeof(int));

	for (size_t i = 0; i <= max; i++)	 f[i] = 0;
	for (size_t i = 0; i < n; i++)	 f[a[i]]++;
	for (size_t i = 1; i <= max; i++)	f[i] += f[i - 1];
	for (int i = n - 1; i >= 0; i--)	b[--f[a[i]]] = a[i];
	for (size_t i = 0; i < n; i++)  a[i] = b[i];

	free(b);
	free(f);
}

void main() {
	printf("��������\n");
	printf("����� ���� : ");
	int nx;
	scanf("%d", &nx);
	int* x = (int*)calloc(nx, sizeof(int));
	
	// ���� �Է°� ���� ���� ���� �Է��ϸ� �ȵǰ�. ���� Ŀ���� �Է�
	for (int i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	fsort(x, nx, 100);

	for (size_t i = 0; i < nx; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	free(x);
}