#include <stdio.h>

char str[101];

int main() {
    scanf("%s", str);

    int open_count = 0;
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            open_count++;
        } else if (str[i] == ')') {
            result += open_count;
        }
    }

    printf("%d\n", result);
    return 0;
}
