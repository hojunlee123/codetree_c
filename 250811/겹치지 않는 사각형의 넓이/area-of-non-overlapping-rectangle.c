#include <stdio.h>

int x1[3], y1[3];
int x2[3], y2[3];

int main(void) {
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }

    int areaA = (x2[0] - x1[0]) * (y2[0] - y1[0]);
    int areaB = (x2[1] - x1[1]) * (y2[1] - y1[1]);

    int overlapA = 0;
    int ox1 = (x1[0] > x1[2]) ? x1[0] : x1[2];
    int oy1 = (y1[0] > y1[2]) ? y1[0] : y1[2];
    int ox2 = (x2[0] < x2[2]) ? x2[0] : x2[2];
    int oy2 = (y2[0] < y2[2]) ? y2[0] : y2[2];
    if (ox2 > ox1 && oy2 > oy1) {
        overlapA = (ox2 - ox1) * (oy2 - oy1);
    }

    int overlapB = 0;
    ox1 = (x1[1] > x1[2]) ? x1[1] : x1[2];
    oy1 = (y1[1] > y1[2]) ? y1[1] : y1[2];
    ox2 = (x2[1] < x2[2]) ? x2[1] : x2[2];
    oy2 = (y2[1] < y2[2]) ? y2[1] : y2[2];
    if (ox2 > ox1 && oy2 > oy1) {
        overlapB = (ox2 - ox1) * (oy2 - oy1);
    }

    int result = areaA + areaB - overlapA - overlapB;
    printf("%d\n", result);

    return 0;
}
