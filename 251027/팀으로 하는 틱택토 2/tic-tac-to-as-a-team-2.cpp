#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

string inp[3];

int main() {
    for(int i = 0; i < 3; i++) cin >> inp[i];

    set<pair<int,int>> s;
    vector<vector<pair<int,int>>> lines;

    for(int i = 0; i < 3; i++)
        lines.push_back({{i,0},{i,1},{i,2}});
    for(int j = 0; j < 3; j++)
        lines.push_back({{0,j},{1,j},{2,j}});
    lines.push_back({{0,0},{1,1},{2,2}});
    lines.push_back({{0,2},{1,1},{2,0}});

    for(auto &ln : lines) {
        int a = inp[ln[0].first][ln[0].second] - '0';
        int b = inp[ln[1].first][ln[1].second] - '0';
        int c = inp[ln[2].first][ln[2].second] - '0';
        if(a == b && b == c) continue;
        vector<int> v = {a,b,c};
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        if(v.size() == 2) {
            s.insert({v[0], v[1]});
        }
    }

    cout << s.size();
    return 0;
}
