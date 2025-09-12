#include <stdio.h>

int arr[100];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    int max_sum = sum;
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    
    printf("%d\n", max_sum);
    return 0;
}
