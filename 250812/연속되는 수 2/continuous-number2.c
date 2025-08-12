#include <stdio.h>

int arr[1000];

int main(void) {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 1, currentCount = 1;

    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    printf("%d\n", maxCount);
    return 0;
}
