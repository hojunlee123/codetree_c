#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int x = 0, y = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    
    for (int i = 0; i < n; i++) {
        char dir;
        int dist;
        scanf(" %c %d", &dir, &dist);
        
        int d;
        if (dir == 'N') d = 0;
        else if (dir == 'E') d = 1;
        else if (dir == 'S') d = 2;
        else if (dir == 'W') d = 3;
        
        x += dx[d] * dist;
        y += dy[d] * dist;
    }
    
    printf("%d %d\n", x, y);
    return 0;
}
