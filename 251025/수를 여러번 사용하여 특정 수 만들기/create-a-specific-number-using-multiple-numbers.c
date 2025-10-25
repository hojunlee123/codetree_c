#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max_val = 0;

    for (int i = 0; i * a <= c; i++) {       
        for (int j = 0; i * a + j * b <= c; j++) { 
            int sum = i * a + j * b;
            if (sum > max_val)
                max_val = sum;
        }
    }

    printf("%d\n", max_val);
    return 0;
}
