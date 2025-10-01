#include <stdio.h>
#include <stdlib.h>

int n;
int x[100], y[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int min_dist = 2000000000; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int dist = dx * dx + dy * dy;
            if (dist < min_dist) {
                min_dist = dist;
            }
        }
    }

    printf("%d\n", min_dist);
    return 0;
}
