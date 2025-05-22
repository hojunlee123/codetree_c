#include <stdio.h>

int min(int a,int b,int c){
    if(a>=b){
        if(b>=c){
            return c;
        }
        else{
            return b;
        }
    }
    else{
        if(a>=c){
            return c;
        }
        else{
            return a;
        }
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d",min(a,b,c));
    
    return 0;
}