#include <stdio.h>

int n, m;
int A[101], B[101];
int cntB[101];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", &B[j]);
        cntB[B[j]]++;
    }

    int ans = 0;
    for (int i = 0; i <= n - m; i++) {
        int cntA[101] = {0};
        for (int j = i; j < i + m; j++) {
            cntA[A[j]]++;
        }
        int same = 1;
        for (int v = 1; v <= 100; v++) {
            if (cntA[v] != cntB[v]) {
                same = 0;
                break;
            }
        }
        if (same) ans++;
    }

    printf("%d\n", ans);
    return 0;
}
