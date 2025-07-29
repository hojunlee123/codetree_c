#include <stdio.h>
#include <stdbool.h>

bool is_whole_number(int n) {
    if (n % 2 == 0) return false;
    if (n % 10 == 5) return false;
    if (n % 3 == 0 && n % 9 != 0) return false;
    return true;
}

int main() {
    int A, B;
    int count = 0;

    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++) {
        if (is_whole_number(i)) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
