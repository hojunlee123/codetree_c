#include <stdio.h>
#include <string.h>

char binary[11];

int toDecimal(char *str) {
    int value = 0;
    for (int i = 0; str[i]; i++) {
        value = value * 2 + (str[i] - '0');
    }
    return value;
}

int main() {
    scanf("%s", binary);
    int len = strlen(binary);
    int max_value = 0;

    for (int i = 0; i < len; i++) {
        char temp[11];
        strcpy(temp, binary);

        temp[i] = (temp[i] == '0') ? '1' : '0';

        int val = toDecimal(temp);
        if (val > max_value) {
            max_value = val;
        }
    }

    printf("%d\n", max_value);
    return 0;
}
