#include <stdio.h>

int n;
int arr[20][20];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int maxCoins = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - 3; j++) {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            if (sum > maxCoins)
                maxCoins = sum;
        }
    }

    printf("%d\n", maxCoins);
    return 0;
}
