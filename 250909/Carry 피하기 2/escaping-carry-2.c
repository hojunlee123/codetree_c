#include <stdio.h>

int n;
int arr[20];

int no_carry(int x, int y, int z) {
    while (x > 0 || y > 0 || z > 0) {
        int sum = (x % 10) + (y % 10) + (z % 10);
        if (sum >= 10) return 0; 
        x /= 10; y /= 10; z /= 10;
    }
    return 1; 
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (no_carry(arr[i], arr[j], arr[k])) {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum > ans) ans = sum;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
