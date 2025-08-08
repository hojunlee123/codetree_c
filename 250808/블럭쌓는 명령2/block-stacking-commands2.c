#include <stdio.h>

int n, k;
int a[101], b[101];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    int cnt[101] = {0};
    for (int i = 1; i <= k; i++) {
        for (int j = a[i]; j <= b[i]; j++) {
            cnt[j]++;
        }
    }
    
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        if (cnt[i] > mx) mx = cnt[i];
    }
    
    printf("%d\n", mx);
    return 0;
}
