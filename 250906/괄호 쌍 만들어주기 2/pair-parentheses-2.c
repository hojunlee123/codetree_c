#include <stdio.h>
#include <string.h>

char str[101];

int main() {
    scanf("%s", str);
    int n = strlen(str);

    int open = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '(') {
            open++;
        } else if (str[i] == ')') {
            ans += open;
        }
    }

    printf("%d\n", ans);
    return 0;
}
