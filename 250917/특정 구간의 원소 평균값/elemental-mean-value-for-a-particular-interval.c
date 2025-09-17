#include <stdio.h>

int arr[101];
int prefix[101];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    int count = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            int sum = prefix[r] - prefix[l-1];
            int len = r - l + 1;
            if (sum % len != 0) continue;
            int avg = sum / len;
            for (int k = l; k <= r; k++) {
                if (arr[k] == avg) {
                    count++;
                    break;
                }
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}
