#include <stdio.h>

int n, m;
char grid[55][55];

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'L') {
                for (int dir = 0; dir < 8; dir++) {
                    int x1 = i + dx[dir], y1 = j + dy[dir];
                    int x2 = i + 2*dx[dir], y2 = j + 2*dy[dir];
                    if (x2 < 0 || x2 >= n || y2 < 0 || y2 >= m) continue;
                    if (grid[x1][y1] == 'E' && grid[x2][y2] == 'E') {
                        count++;
                    }
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
