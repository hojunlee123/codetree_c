#include <stdio.h>
#include <stdlib.h>

int num[100];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int max_bomb = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (j - i <= k && num[i] == num[j]) {
                if (num[i] > max_bomb) max_bomb = num[i];
            }
        }
    }

    printf("%d\n", max_bomb);
    return 0;
}
