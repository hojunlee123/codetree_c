#include <stdio.h>
#include <stdlib.h>

int n;
int l[101], r[101];

typedef struct {
    int l, r;
} Interval;

int cmp(const void *a, const void *b) {
    Interval *ia = (Interval*)a;
    Interval *ib = (Interval*)b;
    if (ia->l == ib->l) return ia->r - ib->r;
    return ia->l - ib->l;
}

int calc(int skip) {
    Interval arr[101];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == skip) continue;
        arr[cnt].l = l[i];
        arr[cnt].r = r[i];
        cnt++;
    }
    qsort(arr, cnt, sizeof(Interval), cmp);

    int total = 0;
    int curL = arr[0].l, curR = arr[0].r;

    for (int i = 1; i < cnt; i++) {
        if (arr[i].l <= curR) {
            if (arr[i].r > curR) curR = arr[i].r;
        } else {
            total += curR - curL;
            curL = arr[i].l;
            curR = arr[i].r;
        }
    }
    total += curR - curL;
    return total;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &l[i], &r[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int time = calc(i);
        if (time > ans) ans = time;
    }

    printf("%d\n", ans);
    return 0;
}
