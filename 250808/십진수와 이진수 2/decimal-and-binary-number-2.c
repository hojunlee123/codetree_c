#include <stdio.h>

char binary[11];

int main() {
    scanf("%10s", binary);
    int n = 0;
    for (int i = 0; binary[i] != '\0'; i++) n = n * 2 + (binary[i] - '0');
    n *= 17;
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    char out[32];
    int idx = 0;
    while (n > 0) {
        out[idx++] = '0' + (n % 2);
        n /= 2;
    }
    for (int i = idx - 1; i >= 0; i--) putchar(out[i]);
    putchar('\n');
    return 0;
}
