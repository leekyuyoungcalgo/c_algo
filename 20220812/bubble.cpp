// 두 변수의 값을 서로 교환해 보세요.
// 함수로 작성해 주세요.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// swap 함수
// 1 변수를 교환
// 2.함수화 했을때. 함수의 매개변수는 복사본이 전달되니.
// 원본이 바뀔려면.. 포인터를 이용
void swap(int *x, int *y) 
{	
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
void bubble(int ary[], int n, bool isAsc) {
	// 정렬 버블소트.. 오름차순
	// 뒤에서부터 내려오면서 작은 값은 앞으로 보내는 작업
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
	printf("정수배열의 개수를 입력하세요 :");
	scanf("%d", &n);
	int* ary = (int*)calloc(n, sizeof(int));
	for (size_t i = 0; i < n; i++)
	{
		printf("값을 입력하세요 :");
		scanf("%d", &ary[i]);
	}
	
	// 정렬(기본이 오름차순)
	bubble(ary, n,true);
	// 출력
	for (size_t i = 0; i < n; i++)
	{
		printf("%d  ", ary[i]);
	}
	printf("\n");

	if(ary != NULL)
		free(ary);

}