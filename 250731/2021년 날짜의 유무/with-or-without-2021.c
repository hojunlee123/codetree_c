#include <stdio.h>

int is_valid_date(int m, int d) {
    int days_in_month[] = {
        0,  
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (m < 1 || m > 12)
        return 0;
    if (d < 1 || d > days_in_month[m])
        return 0;
    return 1;
}

int main() {
    int m, d;
    scanf("%d %d", &m, &d);

    if (is_valid_date(m, d))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
