#include <stdio.h>

int n;
int x1[100], x2[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int overlap = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if ((x1[i] - x1[j]) * (x2[i] - x2[j]) < 0) {
                overlap = 1;
                break;
            }
        }
        if (!overlap) count++;
    }

    printf("%d\n", count);
    return 0;
}
