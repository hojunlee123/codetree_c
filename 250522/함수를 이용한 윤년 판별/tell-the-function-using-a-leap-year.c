#include <stdio.h>
#include <stdbool.h>


int main() {
    int y;
    scanf("%d", &y);
    
    if(y%4==0){
        if(y%100==0){
            if(y%400!=0){
                printf("false");
            }
            else printf("true");
        }

        else printf("true");
    }

    else printf("false");

    


    
    return 0;
}