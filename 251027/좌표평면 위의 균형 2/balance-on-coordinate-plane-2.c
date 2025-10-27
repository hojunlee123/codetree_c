#include <stdio.h>

int n;
int x[101], y[101];
int x=0;
int y=0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for(int i=0;i<n;i++){
        x+=x[i];
        y+=y[i];
    }

    int x1=x/n;
    int y1=y/n;

   print("%d",%x1);


   
    
    return 0;
}