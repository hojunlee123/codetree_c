#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int N, B;
    int P[1001];
    scanf("%d %d", &N, &B);
    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }

    qsort(P, N, sizeof(int), cmp);

    int max_count = 0;
    for (int i = 0; i < N; i++) {
        int budget = B;
        int count = 0;

        budget -= P[i] / 2;
        if (budget < 0) continue;
        count++;

        for (int j = 0; j < N; j++) {
            if (j == i) continue;
            if (budget >= P[j]) {
                budget -= P[j];
                count++;
            } else break;
        }
        if (count > max_count) max_count = count;
    }

    printf("%d\n", max_count);
    return 0;
}
