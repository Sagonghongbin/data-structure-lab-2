#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int n=0;
	int i = 0;
	int multiply[9];
	scanf("%d", &n);
	printf("1~9의 정수를 입력하세요: %d", n);
	

	for (int i = 0; i < 9; i++) {
		
		multiply[i] = (i + 1) * n;
		printf("%d * %d = %d", n, i + 1, multiply[i]);

	}
	
	
}
