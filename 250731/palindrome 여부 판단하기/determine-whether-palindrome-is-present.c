#include <stdio.h>
#include <string.h>

char A[101];

int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    scanf("%s", A);

    if (is_palindrome(A))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
