#include <stdio.h>

int a[101];
int b[101];
int c[101];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }
    
    int max_score = 0;

    for (int start = 1; start <= 3; start++) { 
        int pos = start;
        int score = 0;
        for (int i = 0; i < n; i++) {
            if (pos == a[i])
                pos = b[i];
            else if (pos == b[i])
                pos = a[i];

            if (pos == c[i])
                score++;
        }
        if (score > max_score)
            max_score = score;
    }

    printf("%d\n", max_score);
    return 0;
}
