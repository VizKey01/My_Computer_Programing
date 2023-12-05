#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
#define ll long long
#define db double

const ll big = 1e6;
int intmax = INT_MAX;

struct Node{
    int u, v, w;

    // bool operator>(const Node& other) const {
    //     return w > other.w;
    // }
};

ll m; 
vector<ll> dp(1005, 0);

void sol() {
    ll n;
    cin >> m >> n;
    vector<ll> k(m + 1, 0), a(m + 1, 0);
    for(ll i = 1; i <= m;i++) cin >> k[i];
    for(ll i = 0; i < m;i++) {
        cin >> a[i];
        dp[i] = a[i];
    }
    for(int i = m; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i] = (dp[i] + ((k[j] * dp[i - j]) % 32717)) % 32717;
        }
    }

    cout << dp[n];
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    sol();
    return 0;
}