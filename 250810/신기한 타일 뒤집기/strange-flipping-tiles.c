#include <stdio.h>

#define OFFSET 100000
#define SIZE 200001

int main() {
    int n;
    scanf("%d", &n);
    
    int tiles[SIZE] = {0}; 
    int pos = OFFSET; 
    
    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        scanf("%d %c", &x, &dir);
        
        if (dir == 'L') {
            for (int j = 0; j < x; j++) {
                tiles[pos - j] = 1; 
            }
            pos -= (x - 1); 
        } else {
            for (int j = 0; j < x; j++) {
                tiles[pos + j] = 2; 
            }
            pos += (x - 1);
        }
    }
    
    int white = 0, black = 0;
    for (int i = 0; i < SIZE; i++) {
        if (tiles[i] == 1) white++;
        else if (tiles[i] == 2) black++;
    }
    
    printf("%d %d\n", white, black);
    return 0;
}
