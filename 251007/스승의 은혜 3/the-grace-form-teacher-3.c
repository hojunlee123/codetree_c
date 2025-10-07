#include <stdio.h>

int n, b;
int p[1000], s[1000];

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &b);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i], &s[i]);
    }

    int max_cnt = 0;

    for (int coupon = 0; coupon < n; coupon++) {
        int cost[1000];
        for (int i = 0; i < n; i++) {
            cost[i] = p[i] + s[i];
        }
        cost[coupon] = p[coupon] / 2 + s[coupon];  

        sort(cost, n);

        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (sum + cost[i] <= b) {
                sum += cost[i];
                cnt++;
            } else break;
        }

        if (cnt > max_cnt) max_cnt = cnt;
    }

    printf("%d\n", max_cnt);
    return 0;
}
