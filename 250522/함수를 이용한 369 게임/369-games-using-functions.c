#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int k=0;
    for(int j=a;j<=b;j++){
        if(j%10==3 ||j%10==6 ||j%10==9 || j/10==3){
            k++;
        }
        else{
            if(j%3==0){
                k++;
            }
        }

        
    }
    
    printf("%d",k);

    return 0;
}