#include <stdio.h>

int n, m;
int A_v[1001], A_t[1001];
int B_v[1001], B_t[1001];
long long posA[1000001], posB[1000001]; 
int main() {
    scanf("%d %d", &n, &m);
    
    int total_time = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &A_v[i], &A_t[i]);
        total_time += A_t[i];
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &B_v[i], &B_t[i]);
    }
    
    // A의 위치 기록
    int t_idx = 0;
    long long cur_pos = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < A_t[i]; j++) {
            cur_pos += A_v[i];
            posA[++t_idx] = cur_pos;
        }
    }
    
    t_idx = 0;
    cur_pos = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < B_t[i]; j++) {
            cur_pos += B_v[i];
            posB[++t_idx] = cur_pos;
        }
    }
    
    int changes = 0;
    int prev_state = 0; 
    
    for (int t = 1; t <= total_time; t++) {
        int state;
        if (posA[t] > posB[t]) state = 1;
        else if (posA[t] < posB[t]) state = 2;
        else state = 0;
        
        if (state != prev_state) {
            changes++;
            prev_state = state;
        }
    }
    
    printf("%d\n", changes);
    return 0;
}
