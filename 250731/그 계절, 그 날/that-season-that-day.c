#include <stdio.h>

int is_leap_year(int year) {
    if (year % 4 != 0)
        return 0;
    else if (year % 100 != 0)
        return 1;
    else if (year % 400 != 0)
        return 0;
    else
        return 1;
}

int is_valid_date(int year, int month, int day) {
    int days_in_month[] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (month < 1 || month > 12)
        return 0;

    if (month == 2 && is_leap_year(year))
        return day >= 1 && day <= 29;

    return day >= 1 && day <= days_in_month[month];
}

void print_season(int month) {
    if (month >= 3 && month <= 5)
        printf("Spring\n");
    else if (month >= 6 && month <= 8)
        printf("Summer\n");
    else if (month >= 9 && month <= 11)
        printf("Fall\n");
    else
        printf("Winter\n");
}

int y, m, d;

int main(void) {
    scanf("%d %d %d", &y, &m, &d);

    if (is_valid_date(y, m, d))
        print_season(m);
    else
        printf("-1\n");

    return 0;
}
