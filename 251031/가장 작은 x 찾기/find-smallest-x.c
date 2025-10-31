#include <stdio.h>

typedef struct {
    int start, end;
} Interval;

int main() {
    int n;
    scanf("%d", &n);
    Interval arr[105];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i].start, &arr[i].end);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].start > arr[j].start) {
                Interval tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    int cnt = 1;
    int cur_start = arr[0].start;
    int cur_end = arr[0].end;

    for (int i = 1; i < n; i++) {
        if (arr[i].start <= cur_end) {
            if (arr[i].end > cur_end)
                cur_end = arr[i].end;
        } else {
            cnt++;
            cur_start = arr[i].start;
            cur_end = arr[i].end;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
