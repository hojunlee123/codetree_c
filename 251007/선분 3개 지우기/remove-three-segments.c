#include <stdio.h>

int n;
int l[10], r[10];
int removed[10];

int is_non_overlap() {
    for (int i = 0; i < n; i++) {
        if (removed[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (removed[j]) continue;
            if (!(r[i] < l[j] || r[j] < l[i])) return 0;
        }
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &l[i], &r[i]);

    int count = 0;

    for (int a = 0; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            for (int c = b + 1; c < n; c++) {
                for (int i = 0; i < n; i++) removed[i] = 0;
                removed[a] = removed[b] = removed[c] = 1;

                if (is_non_overlap())
                    count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
