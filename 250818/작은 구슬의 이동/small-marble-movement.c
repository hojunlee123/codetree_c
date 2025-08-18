#include <stdio.h>

int N, T, R, C;
char D;

int main() {
    scanf("%d %d", &N, &T);
    scanf("%d %d %c", &R, &C, &D);

    int dir;
    if (D == 'U') dir = 0;
    else if (D == 'D') dir = 1;
    else if (D == 'L') dir = 2;
    else dir = 3;

    int dx[4] = {-1, 1, 0, 0}; 
    int dy[4] = {0, 0, -1, 1};

    for (int t = 0; t < T; t++) {
        int nr = R + dx[dir];
        int nc = C + dy[dir];

        if (nr < 1 || nr > N || nc < 1 || nc > N) {
            if (dir == 0) dir = 1;
            else if (dir == 1) dir = 0;
            else if (dir == 2) dir = 3;
            else dir = 2;
        } else {
            R = nr;
            C = nc;
        }
    }

    printf("%d %d\n", R, C);
    return 0;
}
