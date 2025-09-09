#include <stdio.h>

int arr[19][19];

int dx[4] = {0, 1, 1, -1};
int dy[4] = {1, 0, 1, 1};

int main() {
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (arr[i][j] == 0) continue; 
            int color = arr[i][j];
            for (int d = 0; d < 4; d++) {
                int cnt = 1;
                int x = i, y = j;
                while (cnt < 5) {
                    x += dx[d];
                    y += dy[d];
                    if (x < 0 || x >= 19 || y < 0 || y >= 19) break;
                    if (arr[x][y] == color) cnt++;
                    else break;
                }
                if (cnt == 5) {
                    int px = i - dx[d], py = j - dy[d];
                    int nx = x + dx[d], ny = y + dy[d];
                    if (px >= 0 && px < 19 && py >= 0 && py < 19 && arr[px][py] == color) continue;
                    if (nx >= 0 && nx < 19 && ny >= 0 && ny < 19 && arr[nx][ny] == color) continue;

                    printf("%d\n", color);

                    int midx = i + dx[d] * 2;
                    int midy = j + dy[d] * 2;
                    printf("%d %d\n", midx + 1, midy + 1);
                    return 0;
                }
            }
        }
    }

    printf("0\n");
    return 0;
}
