#include <stdio.h>

int n;
int arr[100];
int count[201]; 

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (sum % 2 == 0) {
                int k = sum / 2;
                count[k]++;
                if (count[k] > max_cnt)
                    max_cnt = count[k];
            }
        }
    }

    printf("%d\n", max_cnt);
    return 0;
}
