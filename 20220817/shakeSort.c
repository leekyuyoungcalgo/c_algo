#include <stdio.h>
void shakeBubble(int list[], int size) {
	int left = 0;
	int right = size - 1;
	int last = right;
	while (left < right)
	{
		// 1.  �����ʿ��� �������� Ž���ϸ鼭 ���� ���� ���� �̵�
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
		// 2. ���ʿ��� ���������� Ž���ϸ鼭 ū ���� �ڷ� �̵� 
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
	int list[] = { 2,1,5,3,4,8,7,9 }; // �迭�ʱ�ȭ
	int size = sizeof(list) / sizeof(list[0]);  // �迭���� ���
	shakeBubble(list, size);
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");

	
	
}