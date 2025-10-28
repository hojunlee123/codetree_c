#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N >> str;

    for (int k = 1; k <= N; k++) {
        set<string> seen;
        bool duplicate = false;

        for (int i = 0; i + k <= N; i++) {
            string sub = str.substr(i, k);
            if (seen.count(sub)) {
                duplicate = true;
                break;
            }
            seen.insert(sub);
        }

        if (!duplicate) {
            cout << k;
            return 0;
        }
    }
}
