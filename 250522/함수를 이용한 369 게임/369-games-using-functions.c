#include <stdio.h>
#include <stdbool.h>

bool contains369(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit == 3 || digit == 6 || digit == 9)
            return true;
        n /= 10;
    }
    return false;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int k = 0;
    for (int j = a; j <= b; j++) {
        if (contains369(j) || j % 3 == 0) {
            k++;
        }
    }

    printf("%d\n", k);
    return 0;
}