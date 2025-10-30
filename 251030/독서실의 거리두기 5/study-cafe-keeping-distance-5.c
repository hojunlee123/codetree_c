#include <stdio.h>

int n;
char seat[25];

int main() {
    scanf("%d", &n);
    scanf("%s", seat);

    int answer = 0;

    for (int i = 0; i < n; i++) {
        if (seat[i] == '1') continue; 

        seat[i] = '1'; 

        int pos[25], cnt = 0;
        for (int j = 0; j < n; j++) {
            if (seat[j] == '1') pos[cnt++] = j;
        }

        int minDist = 100; 
        for (int j = 1; j < cnt; j++) {
            int dist = pos[j] - pos[j - 1];
            if (dist < minDist) minDist = dist;
        }

        if (minDist > answer) answer = minDist;

        seat[i] = '0'; 
    }

    printf("%d", answer);
    return 0;
}
