#include<stdio.h>
int bf_match(const char txt[], const char pat[]) {
	int pt = 0; // 텍스트 인덱스
	int pp = 0; // 패턴 인덱스

	while (txt[pt] != '\0' && pat[pp] != '\0')
	{
		if (txt[pt] == pat[pp]) {
			pt++;
			pp++;
		}
		else {
			pt = pt - pp + 1;
			pp = 0;
		}
	}
	if (pat[pp] == '\0')
		return pt - pp;
	return -1;
}

void main() {
	char s1[256];
	char s2[256];
	puts("브루트 포스트법");
	printf("텍스트 : ");
	scanf("%s", s1);
	printf("패턴 : ");
	scanf("%s", s2);

	int idx = bf_match(s1, s2);
	printf("idx = %d\n", idx);
}