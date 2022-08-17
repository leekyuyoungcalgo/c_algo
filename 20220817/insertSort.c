#include<stdio.h>
void main() {
	int list[] = { 5,4,8,9,7,3,1,6 };
	int size = sizeof(list) / sizeof(list[0]);

	//  4 5 8 9 7
	for (int i = 1; i < size; i++)
	{
		int temp = list[i];
		int idx = i;
		for (int j = i; j > 0 && temp < list[j-1]; j--) {
			list[j] = list[j - 1];
			idx = j - 1;
		}
		list[idx] = temp;
	}
	// 데이터확인
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}