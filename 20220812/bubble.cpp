// �� ������ ���� ���� ��ȯ�� ������.
// �Լ��� �ۼ��� �ּ���.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// swap �Լ�
// 1 ������ ��ȯ
// 2.�Լ�ȭ ������. �Լ��� �Ű������� ���纻�� ���޵Ǵ�.
// ������ �ٲ����.. �����͸� �̿�
void swap(int *x, int *y) 
{	
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
void bubble(int ary[], int n, bool isAsc) {
	// ���� �����Ʈ.. ��������
	// �ڿ������� �������鼭 ���� ���� ������ ������ �۾�
	bool isSwap = false;
	for (int t = 0; t < n; t++)
	{
		isSwap = false;
		for (int i = n - 1; i > t; i--)
		{
			if (isAsc) {
				if (ary[i - 1] > ary[i]) {
					swap(&ary[i], &ary[i - 1]);
					isSwap = true;
				}
			}
			else {
				if (ary[i - 1] < ary[i]) {
					swap(&ary[i], &ary[i - 1]);
					isSwap = true;
				}
			}
		}
		if (!isSwap) return;
	}
}

void main() {
	int n = 0;
	printf("�����迭�� ������ �Է��ϼ��� :");
	scanf("%d", &n);
	int* ary = (int*)calloc(n, sizeof(int));
	for (size_t i = 0; i < n; i++)
	{
		printf("���� �Է��ϼ��� :");
		scanf("%d", &ary[i]);
	}
	
	// ����(�⺻�� ��������)
	bubble(ary, n,true);
	// ���
	for (size_t i = 0; i < n; i++)
	{
		printf("%d  ", ary[i]);
	}
	printf("\n");

	if(ary != NULL)
		free(ary);

}