/*
* search : 검색
* basic : 선형 검색 - 배열
* 
*/

// 배열의 크기를 입력받고 -입력
// 임의의 정수 배열을 생성 - 동적으로 생성
// 1~100사이의 임의의 숫자로 배열을 채웁니다.   랜덤함수
// 찾고자 하는 값을 입력받아서 - 입력
// 해당 데이터집합중에 원하는 데이터가 있는지 검색하는 함수를 작성 -  함수

#include<stdio.h>
#include<stdlib.h>
int search(const int a[],int size, int search);
void main1() {
	int arySize = 0;
	printf("배열의 요소를 입력하세요 :");
	scanf_s("%d", &arySize);
	// 동적 배열 생성
	int *dary = (int*)calloc(arySize, sizeof(int));
	// dary+1  dary[1]
	for (size_t i = 0; i < arySize; i++)
	{
		dary[i] = (rand() % 100)+1 ;
	}

	printf("찾고자하는 값을 입력하세요");
	int findNum = 0;
	scanf_s("%d", &findNum);
	// 값을 찾으면 해당 인덱스를 반환하는 함수 or 로직을 작성
	int findIndex = search(dary, arySize, findNum);
	if (findIndex != -1)
		printf("%d\n", findIndex);
	else
		printf("찾는값이 없습니다.\n");
	
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





