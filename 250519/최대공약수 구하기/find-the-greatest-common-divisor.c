#include <stdio.h>

int min(int i,int j){
    if(i<j){
        return i;
    }
    
    else{
        return j;
    }
}

void gmin(int a,int b){
        int j=0;
        for(int i=1;i<min(a,b);i++){
            if(min(a,b)%i==0){
                j=i;
            }
            
        }
        printf("%d",j);
}




int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    
    gmin(n,m);
    
    return 0;
}