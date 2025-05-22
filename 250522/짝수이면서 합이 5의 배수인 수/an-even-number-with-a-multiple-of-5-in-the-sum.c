#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n%2==0){
        if((n/10+n%10)%5==0){
            printf("Yes");
        }
        else printf("No");
    }
    
    return 0;
}