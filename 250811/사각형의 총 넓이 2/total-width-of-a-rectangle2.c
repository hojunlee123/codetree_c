#include <stdio.h>

int n;
int x1[10], y1[10], x2[10], y2[10];
int grid[201][201];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }

    for (int i = 0; i < n; i++) {
        int sx = x1[i] + 100;
        int sy = y1[i] + 100;
        int ex = x2[i] + 100;
        int ey = y2[i] + 100;

        for (int x = sx; x < ex; x++) {
            for (int y = sy; y < ey; y++) {
                grid[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int x = 0; x <= 200; x++) {
        for (int y = 0; y <= 200; y++) {
            if (grid[x][y]) area++;
        }
    }

    printf("%d\n", area);
    return 0;
}
