// 이진 검색 binary search
// 1.데이터를 정렬한다.(오름차순..)
// 2. 1 2 3 4 5 6 7 8 9

#include<stdio.h>
#include<stdlib.h>

// 함수로 구현

void main3() {
	puts("요소의 수를 입력하세요 : ");
	int arySize = 0;
	scanf_s("%d", &arySize);
	int* x = (int*)calloc(arySize, sizeof(int));
	puts("오름차순으로 입력하세요 : ");
	for (size_t i = 0; i < arySize; i++)
	{
		printf("x[%d] = :");
		scanf_s("%d", (x + i));
	}
	printf("찾는데이터를 입력하세요");
	int findData = 0;
	scanf_s("%d", &findData);
	// binary search 로직
	int start = 0, end = arySize -1, pc = 0;
	while (start <= end)
	{
		pc = (start + end) / 2;
		if (x[pc] == findData)
			printf("찾은 인덱스는 : %d\n", pc);
		else if (x[pc] < findData)
			start = pc + 1;
		else
			end = pc - 1;	
	}
	free(x);
	printf("end--------------\n");

}