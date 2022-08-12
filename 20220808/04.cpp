#include<stdio.h>
#include<stdlib.h>
void main4() {

	int* x = (int*)calloc(5, sizeof(int));
	
	int xx[5] = {};
	
	printf("%d\n", sizeof(int));  // 4
	printf("%d\n", sizeof(x));  //  8
	printf("%d\n", sizeof(xx)/sizeof(xx[0])); //  배열표기법으로 생성했을겨우
}