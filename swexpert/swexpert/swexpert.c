#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int test_case;
int T;
int main(void) {
	scanf_s("%d", T);
	for (test_case = 0; test_case < T; test_case++) {
		int num[2];
		
		for (i = 0; i < 2; i++) {
			scanf_s("%d", num[i]);
			if (num[0] == num[1]) {
				printf("=");
			}
			else if (num[0] > num[1]) {
				printf(">");
			}
			else; { printf("<"); }
		}

	}
}