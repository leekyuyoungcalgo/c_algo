#ifndef __set
#define __set
typedef struct 
{
	int max;  // �ִ밪
	int num; // ������ ����
	int* set; // ���� ������ �̷�� �迭�� �ּ�
}IntSet;

int init(IntSet* s, int max);
//  ���� s�� n�� ��� �ִ��� Ȯ�� 1, �ƴϸ� 0
int contain(const IntSet* s, int n);
#endif // __set

