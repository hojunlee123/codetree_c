#include <stdio.h>

int main() {
    int m1, d1, m2, d2;
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    if (m1 == m2) {
        printf("%d\n", d2 - d1 + 1);
    } else {
        int total = days[m1] - d1 + 1;
        for (int m = m1 + 1; m < m2; m++) {
            total += days[m];
        }
        total += d2;
        printf("%d\n", total);
    }
    return 0;
}
