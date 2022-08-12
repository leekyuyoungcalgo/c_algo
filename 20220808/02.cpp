#include<stdio.h>
#include<stdlib.h>
void main2() {
	const int MAXARY = 10;
	int ary[MAXARY] = { 5,3,4,2,1 };
	int realDataLength = 5;
	int findData = 2;
	int findIndex = -1;

	ary[realDataLength] = findData;
	for (size_t i = 0; i < MAXARY; i++)
	{		
		if (ary[i] == findData)
			findIndex = i;
			break;
	}
	findIndex = findIndex == realDataLength ? -1 : findIndex;
	if (findIndex != -1) {
		printf("검색된 데이터는 %d 인덱스에 위치합니다.\n", findIndex);
	}

}