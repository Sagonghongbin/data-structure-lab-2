#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int test_case;

    // freopen("input.txt", "r",stdin);
    scanf("%d", &test_case);

    for (int T = 1; T <= test_case; T++) {
        int max = 0;
        for (int i = 0; i < 10; i++) {
            int num;
            scanf("%d", &num);

            if (num > max)
                max = num;
        }
        printf("#%d %d\n", T, max);
    }
    return 0;
}