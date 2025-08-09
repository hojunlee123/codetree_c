#include <stdio.h>

int n;
int a[101], b[101];

int main() {
    int i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d %d", &a[i], &b[i]);
    
    int cnt[201] = {0}; 
    for (i = 1; i <= n; i++) {
        int L = 2 * a[i];
        int R = 2 * b[i];
        for (int p = L; p <= R; p++) cnt[p]++;
    }
    
    int mx = 0;
    for (int p = 2; p <= 200; p++) {
        if (cnt[p] > mx) mx = cnt[p];
    }
    
    printf("%d\n", mx);
    return 0;
}
