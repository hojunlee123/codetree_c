#include <stdio.h>
#include <stdlib.h>

int n;
int a[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_sum = 1000000000; 

    for (int k = 0; k < n; k++) { 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int dist = abs(i - k);
            sum += a[i] * dist;
        }
        if (sum < min_sum) {
            min_sum = sum;
        }
    }

    printf("%d\n", min_sum);
    return 0;
}
