#include <stdio.h>
#include <string.h>

char str[105];

int main() {
    scanf("%s", str);
    int n = strlen(str);

    int open_pairs = 0;
    int ans = 0;

    for (int i = 0; i < n - 1; i++) {
        if (str[i] == '(' && str[i+1] == '(') {
            open_pairs++;
        }
        if (str[i] == ')' && str[i+1] == ')') {
            ans += open_pairs;
        }
    }

    printf("%d\n", ans);
    return 0;
}
