#include <stdio.h>
#include <stdlib.h>

int n;
int x[100], y[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int max_area2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (y[i] != y[j]) continue;
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                if (x[i] == x[k]) {
                    int base = abs(x[i] - x[j]);
                    int height = abs(y[i] - y[k]);
                    int area2 = base * height;
                    if (area2 > max_area2)
                        max_area2 = area2;
                }
                if (x[j] == x[k]) {
                    int base = abs(x[i] - x[j]);
                    int height = abs(y[j] - y[k]);
                    int area2 = base * height;
                    if (area2 > max_area2)
                        max_area2 = area2;
                }
            }
        }
    }

    printf("%d\n", max_area2);
    return 0;
}
