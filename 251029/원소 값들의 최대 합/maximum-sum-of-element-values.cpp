#include <iostream>
using namespace std;

int n, m;
int arr[101];
bool visited[101];
int cycleId[101];
int cycleSum[101];
int cycleLen[101];
int id = 0;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        id++;
        int cur = i;
        int sum = 0, len = 0;
        while (!visited[cur]) {
            visited[cur] = true;
            cycleId[cur] = id;
            sum += arr[cur];
            len++;
            cur = arr[cur];
        }
        cycleSum[id] = sum;
        cycleLen[id] = len;
    }

    int answer = 0;

    for (int start = 1; start <= n; start++) {
        int cur = start;
        int total = 0;
        int cnt = 0;

        while (cnt < m) {
            int cid = cycleId[cur];
            int L = cycleLen[cid];
            int S = cycleSum[cid];

            if (cnt + L <= m) {
                int remain = m - cnt;
                int full = remain / L;
                total += full * S;
                cnt += full * L;
                if (cnt == m) break;
            }

            cur = arr[cur];
            total += arr[cur];
            cnt++;
        }

        answer = max(answer, total);
    }

    cout << answer;
    return 0;
}
