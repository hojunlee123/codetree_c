#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int max_sum = 0;
    for (int i = x; i <= y; i++) {
        int num = i, sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > max_sum)
            max_sum = sum;
    }
    
    printf("%d\n", max_sum);
    return 0;
}
