#include <stdio.h>

int n;
int arr[100][100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int k = 0; k < 4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && arr[nx][ny] == 1) {
                    cnt++;
                }
            }
            if (cnt >= 3)
                result++;
        }
    }

    printf("%d\n", result);
    return 0;
}
