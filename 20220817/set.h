#ifndef __set
#define __set
typedef struct 
{
	int max;  // 최대값
	int num; // 원소의 개수
	int* set; // 실제 집합을 이루는 배열의 주소
}IntSet;

int init(IntSet* s, int max);
//  집합 s에 n이 들어 있는지 확인 1, 아니면 0
int contain(const IntSet* s, int n);
#endif // __set

