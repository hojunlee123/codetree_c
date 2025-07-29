#include <stdio.h>

int n1, n2;
int a[100], b[100];

int is_subsequence() {
    for (int i = 0; i <= n1 - n2; i++) {
        int match = 1; // true
        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                match = 0;
                break;
            }
        }
        if (match) return 1; 
    }
    return 0;
}

int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    if (is_subsequence()) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
