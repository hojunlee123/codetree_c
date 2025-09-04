#include <stdio.h>
#include <stdlib.h>

int n;
int x[101], y[101];

int dist(int i, int j) {
    return abs(x[i] - x[j]) + abs(y[i] - y[j]);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &x[i], &y[i]);

    int total = 0;
    for (int i = 1; i < n; i++)
        total += dist(i - 1, i);

    int min_dist = 1e9;
    for (int i = 1; i < n - 1; i++) { 
        int saved = dist(i - 1, i) + dist(i, i + 1) - dist(i - 1, i + 1);
        int new_dist = total - saved;
        if (new_dist < min_dist)
            min_dist = new_dist;
    }

    printf("%d\n", min_dist);
    return 0;
}
