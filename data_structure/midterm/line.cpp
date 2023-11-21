#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    long long n,m, cnt = 0, ml = 1e7, mr = -1;
    vector<long long> v(1e7, 0);
    cin >> n;
    for(long long i = 0;i < n;i++) {
        cin >> m;
        if(m == 1) {
            long long l, r, temp = 0;
            cin >> l >> r;  
            for(long long j = l; j <= r; j++) {
                v[j] = 1;
                temp++;
            }
            ml = min(l,ml);
            mr = max(r,mr);
        }
        else {
            long long flag = 0, cnt = 1;
            for(long long j = ml; j <= mr; j++) {
                if(v[j] == 0 && flag == 0) {
                    flag = 1;
                    cnt++;
                }
                else if(v[j] != 0 && flag == 1) {
                    flag = 0;
                }
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}