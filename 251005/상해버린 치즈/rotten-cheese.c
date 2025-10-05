#include <stdio.h>

struct Info1 {
    int p, m, t;
};

struct Info2 {
    int p, t;
};

struct Info1 info1[1000];
struct Info2 info2[50];

int n, m, d, s;

int main() {
    scanf("%d %d %d %d", &n, &m, &d, &s);
    for (int i = 0; i < d; i++)
        scanf("%d %d %d", &info1[i].p, &info1[i].m, &info1[i].t);
    for (int i = 0; i < s; i++)
        scanf("%d %d", &info2[i].p, &info2[i].t);

    int max_people = 0;

    for (int cheese = 1; cheese <= m; cheese++) {
        int possible = 1;

        for (int i = 0; i < s; i++) {
            int person = info2[i].p;
            int sick_time = info2[i].t;

            int ate_before = 0;
            for (int j = 0; j < d; j++) {
                if (info1[j].p == person && info1[j].m == cheese && info1[j].t < sick_time)
                    ate_before = 1;
            }
            if (!ate_before) {
                possible = 0;
                break;
            }
        }

        if (!possible) continue;

        int visited[51] = {0};
        int cnt = 0;
        for (int j = 0; j < d; j++) {
            if (info1[j].m == cheese && !visited[info1[j].p]) {
                visited[info1[j].p] = 1;
                cnt++;
            }
        }

        if (cnt > max_people)
            max_people = cnt;
    }

    printf("%d\n", max_people);
    return 0;
}
