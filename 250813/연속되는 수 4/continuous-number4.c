#include <stdio.h>
#define MAX_N 1000

int n;
int arr[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_len = 1;
    int current_len = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("%d\n", max_len);
    return 0;
}
