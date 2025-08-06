#include <stdio.h>

char binary[9];

int main() {
    scanf("%8s", binary);  

    int result = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        result = result * 2 + (binary[i] - '0');
    }

    printf("%d\n", result);
    return 0;
}
