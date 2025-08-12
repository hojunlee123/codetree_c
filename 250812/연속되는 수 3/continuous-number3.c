#include <stdio.h>

int arr[1000];

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxLen = 1, currLen = 1;

    for (i = 1; i < n; i++) {
        if ((arr[i] > 0 && arr[i - 1] > 0) || (arr[i] < 0 && arr[i - 1] < 0)) {
            currLen++;
        } else {
            currLen = 1;
        }
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
