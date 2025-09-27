#include <stdio.h>
#include <stdlib.h>

int n, a, b, c, a2, b2, c2;

int dist(int x, int y, int n) {
    int d = abs(x - y);
    if (d > n - d) d = n - d;
    return d;
}

int count_valid(int x, int n) {
    if (n <= 5) return n;
    else return 5;
}

int overlap_count(int x, int y, int n) {
    int cnt = 0;
    for (int v = 1; v <= n; v++) {
        if (dist(v, x, n) <= 2 && dist(v, y, n) <= 2)
            cnt++;
    }
    return cnt;
}

int main() {
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &a2, &b2, &c2);

    int size1_a = count_valid(a, n);
    int size1_b = count_valid(b, n);
    int size1_c = count_valid(c, n);
    long long total1 = (long long)size1_a * size1_b * size1_c;

    int size2_a = count_valid(a2, n);
    int size2_b = count_valid(b2, n);
    int size2_c = count_valid(c2, n);
    long long total2 = (long long)size2_a * size2_b * size2_c;

    int overlap_a = overlap_count(a, a2, n);
    int overlap_b = overlap_count(b, b2, n);
    int overlap_c = overlap_count(c, c2, n);
    long long overlap = (long long)overlap_a * overlap_b * overlap_c;

    long long ans = total1 + total2 - overlap;
    printf("%lld\n", ans);

    return 0;
}
