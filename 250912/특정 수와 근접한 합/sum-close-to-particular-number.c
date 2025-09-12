#include <stdio.h>
#include <stdlib.h>

int arr[100];

int main() {
    int n, s;
    int i, j;
    scanf("%d %d", &n, &s);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for(i = 0; i < n; i++) total += arr[i];

    int best = 1000000000; 

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            int remain = total - (arr[i] + arr[j]);
            int diff = remain - s;
            if(diff < 0) diff = -diff;
            if(diff < best) best = diff;
        }
    }

    printf("%d\n", best);
    return 0;
}
