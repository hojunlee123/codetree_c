#include <stdio.h>
#include <stdlib.h>

int s[101], n[101];

int main() {
    int t, a, b;
    int cnt_s = 0, cnt_n = 0;
    scanf("%d %d %d", &t, &a, &b);
    
    for (int i = 0; i < t; i++) {
        char c;
        int pos;
        scanf(" %c %d", &c, &pos);
        if (c == 'S')
            s[cnt_s++] = pos;
        else
            n[cnt_n++] = pos;
    }

    int ans = 0;
    for (int k = a; k <= b; k++) {
        int d1 = 1000000000, d2 = 1000000000;

        for (int i = 0; i < cnt_s; i++) {
            int dist = abs(k - s[i]);
            if (dist < d1) d1 = dist;
        }

        for (int j = 0; j < cnt_n; j++) {
            int dist = abs(k - n[j]);
            if (dist < d2) d2 = dist;
        }

        if (d1 <= d2)
            ans++;
    }

    printf("%d\n", ans);
    return 0;
}
