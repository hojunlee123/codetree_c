#include <stdio.h>
#include <stdbool.h>




bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
    }

    int sumprime(int a,int b){
        int sum=0;
        for(int j=a;j<=b;j++){
            if(isPrime(j)==true){
                sum+=j;
            }
        }

        return sum;
    }
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d",sumprime(a,b));

    return 0;
}