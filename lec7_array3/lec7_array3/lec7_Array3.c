#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int i, length = 0;
	char str[50];
	printf("\n���ڿ��� �Է��ϼ���: ");
	gets(str);
	printf("\n�Էµ� ���ڿ���\n");
	printf("\"%s\"\n", str);
	printf("�Դϴ�.\n\n");

	for (i = 0; str[i]; i++) {
		length = length + 1;
		
		
	}
	printf("\n\n�Էµ� ���ڿ��� ����: %d \n", length);
	
}