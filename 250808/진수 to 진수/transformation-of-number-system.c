#include <stdio.h>

int A, B;
char N[10];

int main() {
    scanf("%d %d", &A, &B);
    scanf("%9s", N);

    int value = 0;
    for (int i = 0; N[i] != '\0'; i++) {
        value = value * A + (N[i] - '0');
    }

    if (value == 0) {
        printf("0\n");
        return 0;
    }

    char out[32];
    int idx = 0;
    while (value > 0) {
        out[idx++] = '0' + (value % B);
        value /= B;
    }

    for (int i = idx - 1; i >= 0; i--) putchar(out[i]);
    putchar('\n');

    return 0;
}
