#include <stdio.h>

int R, C;
char grid[15][15];

int main() {
    scanf("%d %d", &R, &C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }

    int count = 0;

    for (int i1 = 1; i1 < R - 2; i1++) {           
        for (int j1 = 1; j1 < C - 2; j1++) {       
            for (int i2 = i1 + 1; i2 < R - 1; i2++) {  
                for (int j2 = j1 + 1; j2 < C - 1; j2++) { 
                    if (grid[0][0] != grid[i1][j1] &&
                        grid[i1][j1] != grid[i2][j2] &&
                        grid[i2][j2] != grid[R-1][C-1]) {

                        if ((R - 1 - i2) >= 1 && (C - 1 - j2) >= 1) {
                            count++;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
