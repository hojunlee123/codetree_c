#include <stdio.h>
#include <string.h>

char text[1001];
char pattern[1001];

int find_substring_index(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);

    for (int i = 0; i <= n - m; i++) {
        int matched = 1;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                matched = 0;
                break;
            }
        }
        if (matched) return i;
    }
    return -1;
}

int main() {
    scanf("%s", text);
    scanf("%s", pattern);

    int index = find_substring_index(text, pattern);
    printf("%d\n", index);

    return 0;
}
