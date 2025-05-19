#include <stdio.h>

void printchar(int a){
    for(int i=0;i<a;i++){
        printf("12345^&*()_\n");
    }
}

int main() {
    int row_num;
    scanf("%d", &row_num);
    printchar(row_num);
    return 0;
}