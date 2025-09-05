#include <stdio.h>

int n;
int a[1003];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int min_sum = 1e9;

    for (int start = 0; start < n; start++) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            int dist = (i - start + n) % n;
            total += a[i] * dist;
        }
        if (total < min_sum)
            min_sum = total;
    }

    printf("%d\n", min_sum);
    return 0;
}
