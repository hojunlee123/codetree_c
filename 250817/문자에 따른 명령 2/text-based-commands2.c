#include <stdio.h>

char cmds[100001];

int main() {
    scanf("%s", cmds);

    int x = 0, y = 0;
    int dir = 0; 
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; cmds[i] != '\0'; i++) {
        if (cmds[i] == 'L') {
            dir = (dir + 3) % 4;
        } else if (cmds[i] == 'R') {
            dir = (dir + 1) % 4;
        } else if (cmds[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}
