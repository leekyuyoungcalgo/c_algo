// ���� �˻� binary search
// 1.�����͸� �����Ѵ�.(��������..)
// 2. 1 2 3 4 5 6 7 8 9

#include<stdio.h>
#include<stdlib.h>

// �Լ��� ����

void main3() {
	puts("����� ���� �Է��ϼ��� : ");
	int arySize = 0;
	scanf_s("%d", &arySize);
	int* x = (int*)calloc(arySize, sizeof(int));
	puts("������������ �Է��ϼ��� : ");
	for (size_t i = 0; i < arySize; i++)
	{
		printf("x[%d] = :");
		scanf_s("%d", (x + i));
	}
	printf("ã�µ����͸� �Է��ϼ���");
	int findData = 0;
	scanf_s("%d", &findData);
	// binary search ����
	int start = 0, end = arySize -1, pc = 0;
	while (start <= end)
	{
		pc = (start + end) / 2;
		if (x[pc] == findData)
			printf("ã�� �ε����� : %d\n", pc);
		else if (x[pc] < findData)
			start = pc + 1;
		else
			end = pc - 1;	
	}
	free(x);
	printf("end--------------\n");

}