#include <stdio.h>

int positions[101];
char letters[101];

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}
void swapc(char *a, char *b) {
    char t = *a; *a = *b; *b = t;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %c", &positions[i], &letters[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(positions[i] > positions[j]) {
                swap(&positions[i], &positions[j]);
                swapc(&letters[i], &letters[j]);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int g = 0, h = 0;
            for(int k = i; k <= j; k++) {
                if(letters[k] == 'G') g++;
                else h++;
            }
            if(g == 0 || h == 0 || g == h) {
                int size = positions[j] - positions[i];
                if(size > ans) ans = size;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
