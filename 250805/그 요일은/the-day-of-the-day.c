#include <stdio.h>
#include <string.h>

int main() {
    int m1, d1, m2, d2;
    char A[4];
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);

    int days[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    int doy1 = d1;
    for (int m = 1; m < m1; m++) doy1 += days[m];
    int doy2 = d2;
    for (int m = 1; m < m2; m++) doy2 += days[m];

    int target;
    if (strcmp(A, "Mon") == 0) target = 1;
    else if (strcmp(A, "Tue") == 0) target = 2;
    else if (strcmp(A, "Wed") == 0) target = 3;
    else if (strcmp(A, "Thu") == 0) target = 4;
    else if (strcmp(A, "Fri") == 0) target = 5;
    else if (strcmp(A, "Sat") == 0) target = 6;
    else target = 0;

    int count = 0;
    int total_days = doy2 - doy1;
    for (int i = 0; i <= total_days; i++) {
        int w = (1 + i) % 7;
        if (w == target) count++;
    }

    printf("%d\n", count);
    return 0;
}
