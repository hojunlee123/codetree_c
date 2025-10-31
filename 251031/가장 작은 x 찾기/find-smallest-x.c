#include <stdio.h>
#include <math.h>

int n;
int a[10], b[10];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &a[i], &b[i]);

    double low = a[n - 1], high = b[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        low = ceil(low / 2.0);
        high = floor(high / 2.0);

        if (low < a[i]) low = a[i];
        if (high > b[i]) high = b[i];
    }

    printf("%d", (int)low);
    return 0;
}
