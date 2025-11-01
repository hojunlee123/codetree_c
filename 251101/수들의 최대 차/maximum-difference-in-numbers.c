#include <stdio.h>

int n, k;
int arr[1000];

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    sort(arr, n);

    int left = 0, max_len = 0;
    for (int right = 0; right < n; right++) {
        while (arr[right] - arr[left] > k) left++;
        int len = right - left + 1;
        if (len > max_len) max_len = len;
    }

    printf("%d\n", max_len);
    return 0;
}
