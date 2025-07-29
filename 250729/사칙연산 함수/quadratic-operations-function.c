#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b; 
}

int main() {
    int a, c;
    char op;

    if (scanf("%d %c %d", &a, &op, &c) != 3) {
        printf("False\n");
        return 0;
    }

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", a, c, add(a, c));
            break;
        case '-':
            printf("%d - %d = %d\n", a, c, subtract(a, c));
            break;
        case '*':
            printf("%d * %d = %d\n", a, c, multiply(a, c));
            break;
        case '/':
            if (c == 0) {
                printf("False\n"); 
            } else {
                printf("%d / %d = %d\n", a, c, divide(a, c));
            }
            break;
        default:
            printf("False\n"); 
    }

    return 0;
}
