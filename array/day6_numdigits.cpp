#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll countDigits(ll num) {    
    ll cnt = 0;
    while (num != 0) {
        num /= 10;
        cnt++;
    }
    
    return cnt;
}

void sol(){/*
    string M,N;
    ll m, n;
    cin >> M >> N;
    m = stoll(M);
    n = stoll(N);
    ll ans = 0;
    if(m == n){
        ans = M.size();
    }
    else{ ll NUM = countDigits(n);
    for (ll i = 1; i <= N.size(); i++) {
        ll rangeStart = max(m, static_cast<ll>(pow(10, i - 1)));
        ll rangeEnd = min(n, static_cast<ll>(pow(10, i) - 1));
        cout << "RANGE " << rangeStart << " " << rangeEnd <<  endl;
        if (rangeStart <= rangeEnd) {
            ans += static_cast<ll>(i) * (ll)(rangeEnd - rangeStart + 1);
            cout << "DENUG " << static_cast<ll>(i) * (ll)(rangeEnd - rangeStart + 1) << endl;
        }
    }

    if (m == 0) {
        ans += 1;  
    }
    }
    cout << ans << endl;*/
}

void sol2(){
    ll m, n;
    cin >> m >> n;
    ll k = 1;
    ll ans = 0;
    ll NUM = countDigits(n);
    //pow(10, i) < n
    for (ll i = 1; i <= NUM; i++) {
        ll RS = (ll)(pow(10, i - 1));
        ll RN = (ll)(pow(10, i) - 1);
        
        if(m > RS){
            RS = m; 
        }   
        if(n < RN){
            RN = n;
        }/*
        if(m == 0 && i == 1){
             ans +=  (n - m) + 1;
            cout << ans << endl;
        }
        else */
        if (RS < RN) {
            ans += (ll)(i) * (ll)(RN - RS + 1);
            cout << ans << endl;
        }
        
    }

    cout << ans << endl;
}

void sol3(){
    ll m,n ;
    cin >> m >> n;
    
    ll num = 0, num2 = 0;
    if(m == 0) num = 1;
    else{m -= 1;
    for(ll i = 1; i <= m; i *= 10){
        num2 += (m - i + 1);
        //cout << num2 << endl;
    }
    }
    for(ll i = 1; i <= n; i *= 10){
        num += (n - i + 1);
        //cout << num << endl;
    }
    cout << num - num2;

}
/*
void sol3(){
    string M,N;
    ll m, n;
    cin >> M >> N;
    m = stoll(M);
    n = stoll(N);
    if(M == N) cout << M.size();
    else{
        m -= 1;
    ll num = 0, num2 = -1;
    if(m == 0) num = 1;
    for(ll i = 1; i <= m; i *= 10){
        num2 += (m - i + 1);
        //cout << num2 << endl;
    }
    for(ll i = 1; i <= n; i *= 10){
        num += (n - i + 1);
        //cout << num << endl;
    }
    cout << num - num2;
    }
}
*/
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    sol3();
    

    /*
    
    ll m,n,tem = 0;
    string sm,sn;
    double M,N;
    cin >> sm >> sn;
    if(sm == sn){
        cout << sm.size();
        return 0;
    }
    m = sm.size();
    n = sn.size();
    for(int i = m; i <= n;i++){
        tem += 9 * (pow(10,i)) * i;
    }
    cout << tem + 1;
    return 0;*/
}

/*
100
1000
*/