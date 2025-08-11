#include <stdio.h>

int main() {
    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;
    scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2);
    scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2, &r2_y2);

    int overlap_x1 = r1_x1 > r2_x1 ? r1_x1 : r2_x1;
    int overlap_x2 = r1_x2 < r2_x2 ? r1_x2 : r2_x2;
    int overlap_y1 = r1_y1 > r2_y1 ? r1_y1 : r2_y1;
    int overlap_y2 = r1_y2 < r2_y2 ? r1_y2 : r2_y2;

    int rem_x1 = r1_x1, rem_y1 = r1_y1, rem_x2 = r1_x2, rem_y2 = r1_y2;

    if (overlap_x1 < overlap_x2 && overlap_y1 < overlap_y2) {
        if (overlap_x1 <= r1_x1 && overlap_x2 >= r1_x2 && overlap_y1 <= r1_y1 && overlap_y2 >= r1_y2) {
            printf("0\n");
            return 0;
        }
        if (overlap_x1 <= r1_x1 && overlap_x2 >= r1_x2) {
            if (overlap_y1 <= r1_y1) rem_y1 = overlap_y2;
            if (overlap_y2 >= r1_y2) rem_y2 = overlap_y1;
        } else if (overlap_y1 <= r1_y1 && overlap_y2 >= r1_y2) {
            if (overlap_x1 <= r1_x1) rem_x1 = overlap_x2;
            if (overlap_x2 >= r1_x2) rem_x2 = overlap_x1;
        }
    }

    int width = rem_x2 - rem_x1;
    int height = rem_y2 - rem_y1;
    int area = width * height;
    if (area < 0) area = 0;
    printf("%d\n", area);
    return 0;
}
