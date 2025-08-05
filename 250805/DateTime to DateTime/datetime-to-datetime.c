#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int start = ((11 * 24) + 11) * 60 + 11;
    int target = ((A * 24) + B) * 60 + C;
    int diff = target - start;
    if (diff < 0) diff = -1;
    printf("%d\n", diff);
    return 0;
}
