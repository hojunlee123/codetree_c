#include <stdio.h>

int main() {
    int N;
    int k=1;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",k);
            k++;
            if(k==10){
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}