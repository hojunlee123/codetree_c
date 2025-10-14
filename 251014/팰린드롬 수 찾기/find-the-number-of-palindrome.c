#include <stdio.h>

int is_palindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int count = 0;
    for (int i = x; i <= y; i++) {
        if (is_palindrome(i))
            count++;
    }

    printf("%d\n", count);
    return 0;
}
