#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	int i;
	char string1[20]="Dreams come true!";
	char string2[20];
	char* ptr1, * ptr2;
	ptr1 = string1; // =&string1[0]
	printf("\n string 1�� �ּ� = %u \t ptr1 = %u", string1, ptr1);
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", ptr1 + 7); 
	// ptr1�� ����Ű�� �ּҷκ��� 7ĭ �ں��� end code�� ���� �� ����
	//��� ���ڿ��� ���
	ptr2 = &string1[7];
	printf("\n %s \n\n", ptr2);
	
	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i);
	}
	printf("\n string2 = %s", string2);

	*ptr1 = 'P';
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s \n", string1);
}