#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[6];
    int total = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int min_diff = 2000000000; 
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = j + 1; k < 6; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                int diff = abs(2 * sum - total);
                if (diff < min_diff) {
                    min_diff = diff;
                }
            }
        }
    }

    printf("%d\n", min_diff);
    return 0;
}
