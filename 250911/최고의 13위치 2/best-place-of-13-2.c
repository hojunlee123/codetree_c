#include <stdio.h>

int n;
int arr[20][20];

typedef struct {
    int row, col, sum;
} Block;

Block blocks[500]; 
int bcnt = 0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - 3; j++) {
            int s = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            blocks[bcnt].row = i;
            blocks[bcnt].col = j;
            blocks[bcnt].sum = s;
            bcnt++;
        }
    }

    int ans = 0;

    for (int i = 0; i < bcnt; i++) {
        for (int j = i + 1; j < bcnt; j++) {
            if (blocks[i].row == blocks[j].row) {
                int l1 = blocks[i].col, r1 = blocks[i].col + 2;
                int l2 = blocks[j].col, r2 = blocks[j].col + 2;
                if (!(r1 < l2 || r2 < l1)) continue; 
            }
            int total = blocks[i].sum + blocks[j].sum;
            if (total > ans) ans = total;
        }
    }

    printf("%d\n", ans);
    return 0;
}
