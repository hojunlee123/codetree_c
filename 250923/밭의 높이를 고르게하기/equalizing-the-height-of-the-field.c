#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, H, T;
    int a[105], cost[105], prefix[105] = {0};
    
    scanf("%d %d %d", &N, &H, &T);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &a[i]);
        cost[i] = abs(a[i] - H);
        prefix[i] = prefix[i-1] + cost[i];
    }
    
    int ans = 1e9;
    for (int l = 1; l <= N; l++) {
        for (int r = l + T - 1; r <= N; r++) {
            int sum = prefix[r] - prefix[l-1];
            if (sum < ans) ans = sum;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}
