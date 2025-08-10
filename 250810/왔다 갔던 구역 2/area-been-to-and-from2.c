#include <stdio.h>

#define OFFSET 1000
#define SIZE 3000

int n;
int visited[SIZE];

int main() {
    scanf("%d", &n);
    int pos = OFFSET;
    for (int i = 0; i < n; i++) {
        int dist;
        char dir;
        scanf("%d %c", &dist, &dir);
        if (dir == 'R') {
            for (int j = 0; j < dist; j++) {
                visited[pos + j]++; 
            }
            pos += dist;
        } else { // L
            for (int j = 0; j < dist; j++) {
                visited[pos - j - 1]++; 
            }
            pos -= dist;
        }
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (visited[i] >= 2) count++;
    }

    printf("%d\n", count);
    return 0;
}
