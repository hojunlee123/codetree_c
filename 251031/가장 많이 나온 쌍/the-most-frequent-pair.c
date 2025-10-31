#include <stdio.h>

int n, m;
int a[101], b[101];
int count[101]; // 1차원 배열만 사용

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    int max_cnt = 0;

    for (int i = 0; i < m; i++) {
        int x = a[i];
        int y = b[i];
        if (x > y) { int temp = x; x = y; y = temp; }

        int key = (x - 1) * n + y; 
        count[key]++;

        if (count[key] > max_cnt)
            max_cnt = count[key];
    }

    printf("%d\n", max_cnt);
    return 0;
}
