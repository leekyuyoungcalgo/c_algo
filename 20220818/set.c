#include<stdio.h>
#include<stdlib.h>
#include"set.h"
int Init(IntSet* s, int max) {
	s->num = 0;
	if ((s->set = calloc(max, sizeof(int))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}
//  집합 s에 n이 들어 있는지 확인.. 인덱스 -1  실패
int Contain(const IntSet* s, int n){
	for (size_t i = 0; i < s->num; i++)
		if (s->set[i] == n) return n;	
	return -1;
}
// set 중복을 허용하지 않는다... 이미 들어있는데이터는 추가가 안됨
void Add(IntSet* s, int n){
	if (s->num < s->max && Contain(s, n) == -1)
		s->set[s->num++] = n;
}

void Remove(IntSet* s, int n){
	int idx = Contain(s, n);
	if (idx != -1)
		s->set[idx] = s->set[--s -> num];
}
int Capacity(const IntSet* s) { // 집합에 넣을수 있는 최대 원소 개수를 반환
	return s->max;
}
int Size(const IntSet* s){
	return s->num;
}
void Assign(IntSet* s1, const IntSet* s2) { // s2 -> s1에 대입
	int n = (s1->max < s2->num) ? s1->max : s2->num;
	for (size_t i = 0; i < n; i++)
		s1->set[i] = s2->set[i];
	s1->num = n;
}
int Equal(const IntSet* s1, const IntSet* s2){
	//1. 두개의 집합이 갯수가 같아야한다.
	if (Size(s1) != Size(s2)) return 0;
	for (size_t i = 0; i < s1->num; i++)
	{
		int j = 0;
		for (j = 0; j < s2->num; j++)		
			if (s1->set[i] == s2->set[j]) break;
		
		if (j == s2->num) return 0;
	}
	return 1;
}

IntSet* Union(IntSet* s1, const IntSet* s2, const IntSet* s3){
	Assign(s1, s2);
	for (size_t i = 0; i < s3->num; i++)
		Add(s1, s3->set[i]);
	return s1;	
}
IntSet* Intersection(IntSet* s1, const IntSet* s2, const IntSet* s3){
	for (size_t i = 0; i < s2->num; i++)	
		for (size_t j = 0; j < s3->num; j++)
			if (s2->set[i] == s3->set[j]) {
				Add(s1, s2->set[i]);
				break;
			}
	return s1;
}
IntSet* Difference(IntSet* s1, const IntSet* s2, const IntSet* s3){
	// Intersection을 이용해서 교집합을 구하고 s4
	// s2와 s4중에 같지 않은 값을 s1 Add 한다
	s1->num = 0;
	for (size_t i = 0; i < s2->num; i++)
	{
		int j = 0;
		for (j = 0; j < s3->num; j++)
			if (s2->set[i] == s3->set[j]) break;
		if (j == s3->num)
			Add(s1, s2->set[i]);
	}
	return s1;
}
void Print(const IntSet* s){
	for (size_t i = 0; i < s->num; i++)
		printf("%d ", s->set[i]);
	printf("\n");
}
void PrintLn(const IntSet* s){
	for (size_t i = 0; i < s->num; i++)
		printf("%d\n", s->set[i]);	
}
void Terminate(IntSet* s){
	if (s->set != NULL)
		free(s->set);
	s->max = s->num = 0;

}