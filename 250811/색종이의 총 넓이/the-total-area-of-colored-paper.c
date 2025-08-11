#include <stdio.h>

int n;
int x[100], y[100];
int paper[201][201];

int main(void) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < n; i++) {
        int X = x[i] + 100;
        int Y = y[i] + 100;
        for (int dx = 0; dx < 8; dx++) {
            for (int dy = 0; dy < 8; dy++) {
                paper[X + dx][Y + dy] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++) {
            if (paper[i][j] == 1)
                area++;
        }
    }

    printf("%d", area);
    return 0;
}
