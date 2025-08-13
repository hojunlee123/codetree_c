#include <stdio.h>

int N, M;
char A_dir[1000];
int A_time[1000];
char B_dir[1000];
int B_time[1000];

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf(" %c %d", &A_dir[i], &A_time[i]);
    for (int i = 0; i < M; i++)
        scanf(" %c %d", &B_dir[i], &B_time[i]);

    int posA = 0, posB = 0;
    int a_idx = 0, b_idx = 0;
    int a_remain = A_time[0], b_remain = B_time[0];
    int time = 0;

    while (a_idx < N && b_idx < M) {
 
        if (A_dir[a_idx] == 'L') posA--;
        else posA++;

        if (B_dir[b_idx] == 'L') posB--;
        else posB++;

        time++;

        if (posA == posB) {
            printf("%d\n", time);
            return 0;
        }

        a_remain--;
        b_remain--;

        if (a_remain == 0) {
            a_idx++;
            if (a_idx < N) a_remain = A_time[a_idx];
        }
        if (b_remain == 0) {
            b_idx++;
            if (b_idx < M) b_remain = B_time[b_idx];
        }
    }

    printf("-1\n");
    return 0;
}
