/*
* search : �˻�
* basic : ���� �˻� - �迭
* 
*/

// �迭�� ũ�⸦ �Է¹ް� -�Է�
// ������ ���� �迭�� ���� - �������� ����
// 1~100������ ������ ���ڷ� �迭�� ä��ϴ�.   �����Լ�
// ã���� �ϴ� ���� �Է¹޾Ƽ� - �Է�
// �ش� �����������߿� ���ϴ� �����Ͱ� �ִ��� �˻��ϴ� �Լ��� �ۼ� -  �Լ�

#include<stdio.h>
#include<stdlib.h>
int search(const int a[],int size, int search);
void main1() {
	int arySize = 0;
	printf("�迭�� ��Ҹ� �Է��ϼ��� :");
	scanf_s("%d", &arySize);
	// ���� �迭 ����
	int *dary = (int*)calloc(arySize, sizeof(int));
	// dary+1  dary[1]
	for (size_t i = 0; i < arySize; i++)
	{
		dary[i] = (rand() % 100)+1 ;
	}

	printf("ã�����ϴ� ���� �Է��ϼ���");
	int findNum = 0;
	scanf_s("%d", &findNum);
	// ���� ã���� �ش� �ε����� ��ȯ�ϴ� �Լ� or ������ �ۼ�
	int findIndex = search(dary, arySize, findNum);
	if (findIndex != -1)
		printf("%d\n", findIndex);
	else
		printf("ã�°��� �����ϴ�.\n");
	
	free(dary);
	
}
int search(const int a[], int size, int search) {	
	for (size_t i = 0; i < size; i++)
	{
		if (search == a[i]) {
			return i;			
		}
	}
	return -1;		
}





