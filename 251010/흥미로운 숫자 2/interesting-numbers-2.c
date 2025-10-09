#include <stdio.h>

int count_interesting(int num) {
    int digits[10] = {0}, arr[10], len = 0;
    int temp = num;
    while (temp > 0) {
        arr[len++] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < len; i++)
        digits[arr[i]]++;

    int max_cnt = 0;
    for (int i = 0; i < 10; i++)
        if (digits[i] > max_cnt)
            max_cnt = digits[i];

    if (len - max_cnt == 1)
        return 1;
    else
        return 0;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int cnt = 0;
    for (int i = x; i <= y; i++) {
        if (count_interesting(i))
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
