#include <stdio.h>

int n;
int x[20], y[20];
int line[40]; 
int type[40]; 
int line_cnt = 0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < n; i++) {
        line[line_cnt] = x[i];
        type[line_cnt] = 0; 
        line_cnt++;
        line[line_cnt] = y[i];
        type[line_cnt] = 1; 
        line_cnt++;
    }

    for (int i = 0; i < line_cnt; i++) {
        for (int j = i; j < line_cnt; j++) {
            for (int k = j; k < line_cnt; k++) {

                int ok = 1;
                for (int p = 0; p < n; p++) {
                    int covered = 0;

                    if ((type[i] == 0 && x[p] == line[i]) ||
                        (type[i] == 1 && y[p] == line[i])) covered = 1;

                    if ((type[j] == 0 && x[p] == line[j]) ||
                        (type[j] == 1 && y[p] == line[j])) covered = 1;
                    
                    if ((type[k] == 0 && x[p] == line[k]) ||
                        (type[k] == 1 && y[p] == line[k])) covered = 1;

                    if (!covered) ok = 0;
                }

                if (ok) {
                    printf("1\n");
                    return 0;
                }
            }
        }
    }

    printf("0\n");
    return 0;
}
