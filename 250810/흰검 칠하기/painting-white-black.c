#include <stdio.h>

#define MAX 200005
#define OFFSET 100000

int color[MAX]; // 0=미색칠, 1=흰, 2=검, 3=회색
int whiteCnt[MAX], blackCnt[MAX];

int main() {
    int n;
    scanf("%d", &n);

    int pos = OFFSET; // 시작 좌표 (0을 OFFSET으로 매핑)
    for (int i = 0; i < n; i++) {
        int len;
        char dir;
        scanf("%d %c", &len, &dir);

        if (dir == 'L') {
            for (int step = 0; step < len; step++) {
                int idx = pos - step;
                if (color[idx] != 3) {
                    whiteCnt[idx]++;
                    if (whiteCnt[idx] >= 2 && blackCnt[idx] >= 2) {
                        color[idx] = 3; // 회색
                    } else {
                        color[idx] = 1; // 흰색
                    }
                }
            }
            pos -= (len - 1);
        } else { // 'R'
            for (int step = 0; step < len; step++) {
                int idx = pos + step;
                if (color[idx] != 3) {
                    blackCnt[idx]++;
                    if (whiteCnt[idx] >= 2 && blackCnt[idx] >= 2) {
                        color[idx] = 3; // 회색
                    } else {
                        color[idx] = 2; // 검은색
                    }
                }
            }
            pos += (len - 1);
        }
    }

    int w = 0, b = 0, g = 0;
    for (int i = 0; i < MAX; i++) {
        if (color[i] == 1) w++;
        else if (color[i] == 2) b++;
        else if (color[i] == 3) g++;
    }
    printf("%d %d %d\n", w, b, g);
    return 0;
}
