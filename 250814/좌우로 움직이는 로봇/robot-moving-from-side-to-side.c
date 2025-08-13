#include <stdio.h>

#define MAX_TIME 1000000

int posA[MAX_TIME + 2], posB[MAX_TIME + 2];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int total_time = 0;
    posA[0] = 0;
    int cur = 0;

    // 로봇 A 이동 처리
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        for (int j = 0; j < t; j++) {
            cur += (d == 'L') ? -1 : 1;
            total_time++;
            posA[total_time] = cur;
        }
    }

    int total_time_B = 0;
    posB[0] = 0;
    cur = 0;

    // 로봇 B 이동 처리
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        for (int j = 0; j < t; j++) {
            cur += (d == 'L') ? -1 : 1;
            total_time_B++;
            posB[total_time_B] = cur;
        }
    }

    int max_time = (total_time > total_time_B) ? total_time : total_time_B;

    // 남는 부분 채우기
    for (int i = total_time + 1; i <= max_time; i++)
        posA[i] = posA[i - 1];
    for (int i = total_time_B + 1; i <= max_time; i++)
        posB[i] = posB[i - 1];

    // 카운트
    int cnt = 0;
    for (int t = 1; t <= max_time; t++) {
        if (posA[t] == posB[t] && posA[t - 1] != posB[t - 1])
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
