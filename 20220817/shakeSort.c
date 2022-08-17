#include <stdio.h>
void shakeBubble(int list[], int size) {
	int left = 0;
	int right = size - 1;
	int last = right;
	while (left < right)
	{
		// 1.  오른쪽에서 왼쪽으로 탐색하면서 가장 작은 값을 이동
		for (int i = right; i > left; i--)
		{
			if (list[i] < list[i - 1]) {
				int temp = list[i];
				list[i] = list[i - 1];
				list[i - 1] = temp;
				last = i;
			}
		}
		left = last;
		// 2. 왼쪽에서 오른쪽으로 탐색하면서 큰 값을 뒤로 이동 
		for (int i = left; i < right; i++)
		{
			if (list[i] > list[i + 1]) {
				int temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				last = i;
			}
		}
		right = last;
	}
}
void main() {
	int list[] = { 2,1,5,3,4,8,7,9 }; // 배열초기화
	int size = sizeof(list) / sizeof(list[0]);  // 배열길이 계산
	shakeBubble(list, size);
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");

	
	
}