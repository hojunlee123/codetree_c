#include <stdio.h>

int n, m;
int A_v[1000], A_t[1000];
int B_v[1000], B_t[1000];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &A_v[i], &A_t[i]);
    for (int i = 0; i < m; i++)
        scanf("%d %d", &B_v[i], &B_t[i]);
    
    int idxA = 0, idxB = 0;
    int remainA = A_t[0], remainB = B_t[0];
    int distA = 0, distB = 0;
    int leader = 0; // 0 = 동률, 1 = A, 2 = B
    int changes = 0;
    
    while (idxA < n && idxB < m) {
        int t = remainA < remainB ? remainA : remainB;
        
        distA += A_v[idxA] * t;
        distB += B_v[idxB] * t;
        
        if (distA > distB) {
            if (leader != 1) {
                if (leader != 0) changes++;
                leader = 1;
            }
        } else if (distB > distA) {
            if (leader != 2) {
                if (leader != 0) changes++;
                leader = 2;
            }
        }
        
        remainA -= t;
        remainB -= t;
        
        if (remainA == 0 && idxA + 1 < n) {
            idxA++;
            remainA = A_t[idxA];
        }
        if (remainB == 0 && idxB + 1 < m) {
            idxB++;
            remainB = B_t[idxB];
        }
    }
    
    printf("%d\n", changes);
    return 0;
}
