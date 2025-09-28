#include <stdio.h>

#define MAX_N 10

int n;
int query[MAX_N][3];
int s[MAX_N], b[MAX_N];

int check(int x, int y, int z, int qx, int qy, int qz, int *strike, int *ball) {
    *strike = 0;
    *ball = 0;
    if (x == qx) (*strike)++;
    if (y == qy) (*strike)++;
    if (z == qz) (*strike)++;
    if (x == qy || x == qz) (*ball)++;
    if (y == qx || y == qz) (*ball)++;
    if (z == qx || z == qy) (*ball)++;
    return 0;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d %d %d", &num, &s[i], &b[i]);
        query[i][0] = num / 100;
        query[i][1] = (num / 10) % 10;
        query[i][2] = num % 10;
    }

    int ans = 0;
    for (int x = 1; x <= 9; x++) {
        for (int y = 1; y <= 9; y++) {
            for (int z = 1; z <= 9; z++) {
                if (x == y || x == z || y == z) continue;
                int valid = 1;
                for (int i = 0; i < n; i++) {
                    int strike, ball;
                    check(x, y, z, query[i][0], query[i][1], query[i][2], &strike, &ball);
                    if (strike != s[i] || ball != b[i]) {
                        valid = 0;
                        break;
                    }
                }
                if (valid) ans++;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
