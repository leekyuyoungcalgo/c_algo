#ifndef __set
#define __set
typedef struct 
{
	int max;  // �ִ밪
	int num; // ������ ����
	int* set; // ���� ������ �̷�� �迭�� �ּ�
}IntSet;

int Init(IntSet* s, int max);
//  ���� s�� n�� ��� �ִ��� Ȯ�� 1, �ƴϸ� 0
int Contain(const IntSet* s, int n);
void Add(IntSet* s, int n);
void Remove(IntSet* s, int n);
int Capacity(const IntSet* s); // ���տ� ������ �ִ� �ִ� ���� ������ ��ȯ
int Size(const IntSet* s);
void Assign(IntSet* s1, const IntSet* s2); // s2 -> s1�� ����
int Equal(const IntSet* s1, const IntSet* s2);
IntSet* Union(IntSet* s1, const IntSet* s2, const IntSet* s3);
IntSet* Intersection(IntSet* s1, const IntSet* s2, const IntSet* s3);
IntSet* Difference(IntSet* s1, const IntSet* s2, const IntSet* s3);
void Print(const IntSet* s);
void PrintLn(const IntSet* s);
void Terminate(IntSet* s);
#endif // __set

