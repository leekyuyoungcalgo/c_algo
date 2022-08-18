#ifndef __set
#define __set
typedef struct 
{
	int max;  // 최대값
	int num; // 원소의 개수
	int* set; // 실제 집합을 이루는 배열의 주소
}IntSet;

int Init(IntSet* s, int max);
//  집합 s에 n이 들어 있는지 확인 1, 아니면 0
int Contain(const IntSet* s, int n);
void Add(IntSet* s, int n);
void Remove(IntSet* s, int n);
int Capacity(const IntSet* s); // 집합에 넣을수 있는 최대 원소 개수를 반환
int Size(const IntSet* s);
void Assign(IntSet* s1, const IntSet* s2); // s2 -> s1에 대입
int Equal(const IntSet* s1, const IntSet* s2);
IntSet* Union(IntSet* s1, const IntSet* s2, const IntSet* s3);
IntSet* Intersection(IntSet* s1, const IntSet* s2, const IntSet* s3);
IntSet* Difference(IntSet* s1, const IntSet* s2, const IntSet* s3);
void Print(const IntSet* s);
void PrintLn(const IntSet* s);
void Terminate(IntSet* s);
#endif // __set

