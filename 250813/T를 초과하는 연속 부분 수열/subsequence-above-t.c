#include <stdio.h>

int arr[1000];

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_len = 0;
    int current_len = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > t) {
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            current_len = 0;
        }
    }

    printf("%d\n", max_len);
    return 0;
}
