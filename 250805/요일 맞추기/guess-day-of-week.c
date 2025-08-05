#include <stdio.h>

int main() {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int doy1 = d1;
    for (int m = 1; m < m1; m++) {
        doy1 += days[m];
    }
    int doy2 = d2;
    for (int m = 1; m < m2; m++) {
        doy2 += days[m];
    }

    int diff = doy2 - doy1;
    int offset = ((diff % 7) + 7) % 7;
    int idx = (1 + offset) % 7;

    char *names[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    printf("%s\n", names[idx]);

    return 0;
}
