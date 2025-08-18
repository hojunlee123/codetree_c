#include <stdio.h>

int n, m;
int arr[100][100];

int dx[4] = {0, 1, 0, -1}; 
int dy[4] = {1, 0, -1, 0};

int InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    scanf("%d %d", &n, &m);

    int x = 0, y = 0, dir = 0; 
    for (int num = 1; num <= n * m; num++) {
        arr[x][y] = num;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4; 
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
