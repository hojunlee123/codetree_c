#include <stdio.h>

int n, b;

int main() {
    scanf("%d %d", &n, &b);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int digits[32];
    int idx = 0;

    while (n > 0) {
        digits[idx++] = n % b;
        n /= b;
    }

    for (int i = idx - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
