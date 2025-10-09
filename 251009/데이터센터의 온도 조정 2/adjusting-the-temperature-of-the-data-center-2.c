#include <stdio.h>

#define MAX_N 1000

int n, c, g, h;
int ta[MAX_N], tb[MAX_N];

int main() {
    scanf("%d %d %d %d", &n, &c, &g, &h);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &ta[i], &tb[i]);
    }

    int max_sum = 0;
    for (int T = 0; T <= 1000; T++) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            if (T < ta[i])
                total += c;
            else if (T <= tb[i])
                total += g;
            else
                total += h;
        }
        if (total > max_sum)
            max_sum = total;
    }

    printf("%d\n", max_sum);
    return 0;
}
