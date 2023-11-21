#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s, ans;
    int m, n, cnt = 1;
    cin >> s >> m;
    //check last character
    s += '*';
    n = s.size();
    char c = s[0];
    for(int i = 1; i < n;i++){
        if(s[i] != c){
            if(cnt < m){
                ans += s.substr(i - cnt, cnt);
            }
            c = s[i];
            // cout << c << endl; 
            // cout << s.substr(n - i - 1, n - 1) << endl;
            cnt = 1;
        }
        else cnt++;
    }
    
    cout << ans;
    return 0;
}
/*
abbcbba
2
aca\

abbcccbbccca
3
abbbba
*/