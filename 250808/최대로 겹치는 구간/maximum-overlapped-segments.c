#include <stdio.h>
#include <stdlib.h>

int n;
int x1[100];
int x2[100];

typedef struct {
    int x;
    int type; 
} Event;

int cmp_event(const void *p, const void *q) {
    const Event *a = p;
    const Event *b = q;
    if (a->x != b->x) return a->x - b->x;
    return a->type - b->type; 
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
    }
    
    Event ev[200];
    int m = 0;
    for (int i = 0; i < n; i++) {
        ev[m++] = (Event){ x1[i], +1 }; 
        ev[m++] = (Event){ x2[i], -1 }; 
    }
    
    qsort(ev, m, sizeof(Event), cmp_event);
    
    int cur = 0, mx = 0;
    for (int i = 0; i < m; i++) {
        cur += ev[i].type;
        if (cur > mx) mx = cur;
    }
    
    printf("%d\n", mx);
    return 0;
}
