#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int i, length = 0;
	char str[50];
	printf("\n문자열을 입력하세요: ");
	gets(str);
	printf("\n입력된 문자열은\n");
	printf("\"%s\"\n", str);
	printf("입니다.\n\n");

	for (i = 0; str[i]; i++) {
		length = length + 1;
		
		
	}
	printf("\n\n입력된 문자열의 길이: %d \n", length);
	
}