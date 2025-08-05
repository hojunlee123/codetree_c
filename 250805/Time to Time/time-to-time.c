#include <stdio.h>

int A, B, C, D;

int get_duration(int ah, int am, int ch, int cm) {
    int start = ah * 60 + am;
    int end = ch * 60 + cm;
    return end - start;
}

int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int result = get_duration(A, B, C, D);
    printf("%d\n", result);

    return 0;
}
