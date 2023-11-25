#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    unordered_map<int, int> mp;
    unordered_map<int, vector<int>> color;
    vector<pair<int, vector<int>>> v;
    int mincolor = 1;

    while (e--) {
        int x, y;
        cin >> x >> y;
        mp[x] = 1;
        mp[y] = 1;
        color[x].push_back(y);
        color[y].push_back(x);
    }

    for (auto &a : color) {
        sort(a.second.begin(), a.second.end());

        for (auto &b : a.second) {
            if (mp[a.first] == mp[b]) {
                mp[b] = mp[a.first] + 1;
                mincolor = max(mincolor, mp[b]);
            }
        }
    }

    cout << mincolor;
    return 0;
}
