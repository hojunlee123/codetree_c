#include <stdio.h>

int a, b;

void update_values(int* x, int* y) {
    if (*x < *y) {
        *x += 10;
        *y *= 2;
    } else {
        *y += 10;
        *x *= 2;
    }
}

int main() {
    scanf("%d %d", &a, &b);
    
    update_values(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
