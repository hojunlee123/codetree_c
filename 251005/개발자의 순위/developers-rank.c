#include <stdio.h>

#define MAX_K 10
#define MAX_N 20

int k, n;
int arr[MAX_K][MAX_N];
int rank_pos[MAX_K][MAX_N + 1];

int main() {
    scanf("%d %d", &k, &n);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            rank_pos[i][arr[i][j]] = j; 
        }
    }

    int count = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            if (a == b) continue;
            int always_higher = 1;
            for (int game = 0; game < k; game++) {
                if (rank_pos[game][a] > rank_pos[game][b]) {
                    always_higher = 0;
                    break;
                }
            }
            if (always_higher) count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
