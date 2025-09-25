#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    long long total = (long long)n * n * n;

    int va = (a + 2 <= n ? a + 2 : n) - (a - 2 >= 1 ? a - 2 : 1) + 1;
    int vb = (b + 2 <= n ? b + 2 : n) - (b - 2 >= 1 ? b - 2 : 1) + 1;
    int vc = (c + 2 <= n ? c + 2 : n) - (c - 2 >= 1 ? c - 2 : 1) + 1;

    long long invalid = (long long)(n - va) * (n - vb) * (n - vc);
    long long ans = total - invalid;

    printf("%lld\n", ans);
    return 0;
}
