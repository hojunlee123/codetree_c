#include <stdio.h>

void cal(int a, int b){
    int p=a;

    for(int j=1;j<b;j++){
        a*=p;
    }

    printf("%d",a);

}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    cal(a,b);


    return 0;
}