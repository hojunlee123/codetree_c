#include <stdio.h>

int n;
int h[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &h[i]);
    
    int max_height = 0;
    for (int i = 0; i < n; i++)
        if (h[i] > max_height) max_height = h[i];

    int max_chunks = 0;

    for (int sea = 1; sea <= max_height; sea++) {
        int chunks = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] > sea) {
                if (i == 0 || h[i - 1] <= sea)  
                    chunks++;
            }
        }
        if (chunks > max_chunks)
            max_chunks = chunks;
    }

    printf("%d\n", max_chunks);
    return 0;
}
