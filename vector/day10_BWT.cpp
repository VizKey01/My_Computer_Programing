#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s,s2,ans;
    cin >> s;
    int n = s.size() + 1;
    s += '$';
    //cout << s << endl;
    vector<string> temp(n);
    for(int i = 0; i < n;i++){
        for(int j = i; j < n;j++){
            temp[i] += s[j];
            //cout << temp[i] << " ";
        }
        temp[i] += s.substr(0,i); 
    }
    sort(temp.begin(), temp.end());
    for(int i = 0; i < n; i++){
        //cout << temp[i] << " " << i << endl;
        ans += temp[i][n-1];
    }
    cout << ans;
}
/*
akainu
*/