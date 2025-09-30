#include <stdio.h>
#include <stdlib.h>

int arr[5];

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int min_diff = 2000000000;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                if (k == i || k == j) continue;
                for (int l = k + 1; l < 5; l++) {
                    if (l == i || l == j) continue;

                    // 남은 한 명
                    int used[5] = {0};
                    used[i] = used[j] = used[k] = used[l] = 1;
                    int rem = -1;
                    for (int m = 0; m < 5; m++) {
                        if (!used[m]) {
                            rem = m;
                            break;
                        }
                    }

                    int sum1 = arr[i] + arr[j];
                    int sum2 = arr[k] + arr[l];
                    int sum3 = arr[rem];

                    if (sum1 == sum2 || sum1 == sum3 || sum2 == sum3)
                        continue;

                    int max = sum1;
                    if (sum2 > max) max = sum2;
                    if (sum3 > max) max = sum3;

                    int min = sum1;
                    if (sum2 < min) min = sum2;
                    if (sum3 < min) min = sum3;

                    int diff = max - min;
                    if (diff < min_diff) {
                        min_diff = diff;
                        found = 1;
                    }
                }
            }
        }
    }

    if (found) printf("%d\n", min_diff);
    else printf("-1\n");

    return 0;
}
