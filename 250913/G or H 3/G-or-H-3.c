#include <stdio.h>

int n, k;
int arr[10001];

int main() {
    scanf("%d %d", &n, &k);
    int max_pos = 0;
    for (int i = 0; i < n; i++) {
        int pos;
        char ch;
        scanf("%d %c", &pos, &ch);
        if (ch == 'G')
            arr[pos] = 1;
        else
            arr[pos] = 2;
        if (pos > max_pos) max_pos = pos;
    }

    int max_score = 0;
    for (int i = 1; i <= max_pos; i++) {
        int sum = 0;
        for (int j = i; j <= i + k && j <= 10000; j++) {
            sum += arr[j];
        }
        if (sum > max_score) max_score = sum;
    }

    printf("%d\n", max_score);
    return 0;
}
