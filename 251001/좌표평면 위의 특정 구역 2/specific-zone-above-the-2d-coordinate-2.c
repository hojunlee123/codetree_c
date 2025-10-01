#include <stdio.h>

int n;
int x[100], y[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int min_area = 2000000000; 

    for (int skip = 0; skip < n; skip++) {
        int xmin = 40001, xmax = 0;
        int ymin = 40001, ymax = 0;
        for (int i = 0; i < n; i++) {
            if (i == skip) continue;
            if (x[i] < xmin) xmin = x[i];
            if (x[i] > xmax) xmax = x[i];
            if (y[i] < ymin) ymin = y[i];
            if (y[i] > ymax) ymax = y[i];
        }
        int area = (xmax - xmin) * (ymax - ymin);
        if (area < min_area) min_area = area;
    }

    printf("%d\n", min_area);
    return 0;
}
