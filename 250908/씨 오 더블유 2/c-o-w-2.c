#include <stdio.h>

int n;
char str[105];

int main() {
    scanf("%d", &n);
    scanf("%s", str);

    long long dpC = 0, dpO = 0, dpW = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'C') {
            dpC += 1;           
        } else if (str[i] == 'O') {
            dpO += dpC;          
        } else if (str[i] == 'W') {
            dpW += dpO;          
        }
    }

    printf("%lld\n", dpW);
    return 0;
}
