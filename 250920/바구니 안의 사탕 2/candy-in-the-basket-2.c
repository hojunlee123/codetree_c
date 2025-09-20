#include <stdio.h>

int n, k;
int arr[101];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int candy, pos;
        scanf("%d %d", &candy, &pos);
        arr[pos] += candy;
    }

    int ans = 0;
    for (int c = 0; c <= 100; c++) {
        int sum = 0;
        int left = c - k;
        int right = c + k;
        if (left < 0) left = 0;
        if (right > 100) right = 100;
        for (int i = left; i <= right; i++) {
            sum += arr[i];
        }
        if (sum > ans) ans = sum;
    }

    printf("%d\n", ans);
    return 0;
}
