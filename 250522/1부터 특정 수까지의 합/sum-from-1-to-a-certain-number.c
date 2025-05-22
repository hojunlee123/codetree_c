#include <stdio.h>

int main() {
    int n;
    int a=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        a+=i;
    }
    
    printf("%d",a/10);

    return 0;
}