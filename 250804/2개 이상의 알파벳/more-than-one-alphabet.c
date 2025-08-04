#include <stdio.h>

char A[101];

int has_at_least_two_distinct_chars(char str[]) {
    int freq[26] = {0};
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        if (freq[index] == 0) {
            freq[index] = 1;
            count++;
        }
        if (count >= 2)
            return 1;
    }
    return 0;
}

int main() {
    scanf("%s", A);

    if (has_at_least_two_distinct_chars(A))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
