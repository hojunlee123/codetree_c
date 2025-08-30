#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    int gcd = 960;
    int found = 0;
    
    for (int i = A; i <= B; i++) {
        if (gcd % i == 0) {
            found = 1;
            break;
        }
    }
    
    printf("%d\n", found);
    return 0;
}
