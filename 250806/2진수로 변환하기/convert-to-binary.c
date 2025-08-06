#include <stdio.h>

int n;

int main(void) {
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    char bin[32];
    int idx = 0;
    while (n > 0) {
        bin[idx++] = '0' + (n % 2);
        n /= 2;
    }
    for (int i = idx - 1; i >= 0; i--) {
        putchar(bin[i]);
    }

    return 0;
}
