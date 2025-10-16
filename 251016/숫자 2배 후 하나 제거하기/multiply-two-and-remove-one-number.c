#include <stdio.h>
#include <stdlib.h>

int n;
int arr[100];

int abs_diff(int a, int b) {
    return a > b ? a - b : b - a;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min_sum = 1e9;

    for (int i = 0; i < n; i++) { 
        int doubled[100];
        for (int k = 0; k < n; k++)
            doubled[k] = arr[k];
        doubled[i] *= 2;

        for (int j = 0; j < n; j++) { 
            int temp[100], idx = 0;
            for (int k = 0; k < n; k++) {
                if (k == j) continue;
                temp[idx++] = doubled[k];
            }

            int sum = 0;
            for (int k = 0; k < idx - 1; k++)
                sum += abs_diff(temp[k + 1], temp[k]);

            if (sum < min_sum)
                min_sum = sum;
        }
    }

    printf("%d\n", min_sum);
    return 0;
}
