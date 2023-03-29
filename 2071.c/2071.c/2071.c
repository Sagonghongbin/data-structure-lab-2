#include<stdio.h>

int main(void) {
	int test_case;
	int T;
	int sum;
	int num[10];

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++) {
		int num[10];
		for(int i=0; i<10; i++)
			scanf("%d", &num[i]);

		int sum = 0;
		for (int i = 0; i < 10; i++) {
			sum = sum + num[i];
		}
		int avg = ((int)(sum)) / 10;

		printf("#%d %d \n", test_case, avg);

	}
	return 0;
}