#include <stdio.h>
#include <stdlib.h>

int arr[6];

int main() {
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    int min_diff = 2000000000;

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                if (k == i || k == j) continue;
                for (int l = k + 1; l < 6; l++) {
                    if (l == i || l == j) continue;
                    int used[6] = {0};
                    used[i] = used[j] = used[k] = used[l] = 1;
                    int rem[2], idx = 0;
                    for (int m = 0; m < 6; m++) {
                        if (!used[m]) rem[idx++] = m;
                    }

                    int sum1 = arr[i] + arr[j];
                    int sum2 = arr[k] + arr[l];
                    int sum3 = arr[rem[0]] + arr[rem[1]];

                    int max = sum1;
                    if (sum2 > max) max = sum2;
                    if (sum3 > max) max = sum3;
                    int min = sum1;
                    if (sum2 < min) min = sum2;
                    if (sum3 < min) min = sum3;

                    int diff = max - min;
                    if (diff < min_diff) min_diff = diff;
                }
            }
        }
    }

    printf("%d\n", min_diff);
    return 0;
}
