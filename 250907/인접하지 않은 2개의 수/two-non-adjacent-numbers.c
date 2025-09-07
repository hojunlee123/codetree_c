#include <stdio.h>
#define MAX_N 100

int n;
int a[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n; j++) { 
            int sum = a[i] + a[j];
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    
    printf("%d\n", max_sum);
    return 0;
}
