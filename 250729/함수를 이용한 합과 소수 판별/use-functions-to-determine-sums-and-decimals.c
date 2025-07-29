#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool digit_sum_is_even(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

int main() {
    int A, B;
    int count = 0;

    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++) {
        if (is_prime(i) && digit_sum_is_even(i)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
