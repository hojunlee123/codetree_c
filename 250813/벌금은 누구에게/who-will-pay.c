#include <stdio.h>

int n, m, k;
int penalized_person[10000];
int count[101]; // 학생은 1번부터 N번까지, 최대 100명

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        scanf("%d", &penalized_person[i]);
    }

    for (int i = 0; i < m; i++) {
        int student = penalized_person[i];
        count[student]++;

        if (count[student] >= k) {
            printf("%d\n", student);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
