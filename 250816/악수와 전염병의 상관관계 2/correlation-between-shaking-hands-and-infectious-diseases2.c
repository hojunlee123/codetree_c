#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int time;
    int person1;
    int person2;
} Shake;

int compare(const void *a, const void *b) {
    return ((Shake *)a)->time - ((Shake *)b)->time;
}

int main() {
    int n, k, p, t;
    scanf("%d %d %d %d", &n, &k, &p, &t);

    Shake shakes[251];
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &shakes[i].time, &shakes[i].person1, &shakes[i].person2);
    }

    qsort(shakes, t, sizeof(Shake), compare);

    int infected[101] = {0};
    int spreadCount[101] = {0};
    infected[p] = 1;
    spreadCount[p] = k;

    for (int i = 0; i < t; i++) {
        int a = shakes[i].person1;
        int b = shakes[i].person2;

        int aInfected = infected[a];
        int bInfected = infected[b];

        int infectA = 0, infectB = 0;

        if (aInfected && spreadCount[a] > 0) {
            spreadCount[a]--;
            if (!bInfected) infectB = 1;
        }

        if (bInfected && spreadCount[b] > 0) {
            spreadCount[b]--;
            if (!aInfected) infectA = 1;
        }

        if (infectA) {
            infected[a] = 1;
            spreadCount[a] = k;
        }
        if (infectB) {
            infected[b] = 1;
            spreadCount[b] = k;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d", infected[i]);
    }
    return 0;
}
