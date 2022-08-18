#include<stdio.h>
int bf_match(const char txt[], const char pat[]) {
	int pt = 0; // �ؽ�Ʈ �ε���
	int pp = 0; // ���� �ε���

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
	puts("���Ʈ ����Ʈ��");
	printf("�ؽ�Ʈ : ");
	scanf("%s", s1);
	printf("���� : ");
	scanf("%s", s2);

	int idx = bf_match(s1, s2);
	printf("idx = %d\n", idx);
}