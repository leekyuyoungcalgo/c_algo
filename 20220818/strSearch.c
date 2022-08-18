// 두개의 문자열을 비교
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int str_cmp(const char* s1, const char* s2) {		
	
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}	
	return *s1 - *s2;
}
void main() {
	char st[128];
	puts("ABCD 와 비교");
	puts("XXXX면 마칩니다.");

	while (1)
	{
		printf("문자열 st : ");
		scanf("%s", st);
		if (str_cmp("XXXX", st) == 0)
			break;
		printf("str_cmp = %d\n", str_cmp("ABCD", st));
	}


}