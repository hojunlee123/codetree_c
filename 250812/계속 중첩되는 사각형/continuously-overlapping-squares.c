#include <stdio.h>

#define MAX_N 10
#define OFFSET 100

int x1[MAX_N], y1[MAX_N], x2[MAX_N], y2[MAX_N];
int board[201][201];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for (int k = 0; k < n; k++) {
        int color = (k % 2 == 0) ? 1 : 2;
        for (int i = x1[k]; i < x2[k]; i++) {
            for (int j = y1[k]; j < y2[k]; j++) {
                board[i][j] = color;
            }
        }
    }

    int blue_area = 0;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++) {
            if (board[i][j] == 2)
                blue_area++;
        }
    }

    printf("%d\n", blue_area);
    return 0;
}
