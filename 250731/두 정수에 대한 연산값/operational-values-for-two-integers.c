#include <stdio.h>

void modify_values(int* x, int* y) {
    if (*x > *y) {
        *x = *x + 25;
        *y = *y * 2;
    } else {
        *y = *y + 25;
        *x = *x * 2;
    }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    modify_values(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
