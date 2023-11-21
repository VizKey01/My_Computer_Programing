#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin, s);
    int n = s.size(), cnt = 0;
    char num[] = {'0','1','2','3','4','5','6','7','8','9'}; 
    for(int i = 0; i < n;i++){
        if(s[i] == ' ')continue;
        if(s[i] >= '0' && s[i] <= '9'){
            num[s[i] - 48] = '\0';
        }
    }
    string ans;
    for(int i = 0; i < 10; i++){
        if(num[i] == '\0')continue;
        cnt++;
        ans += num[i];
        ans += ',';
    }
    if (!ans.empty())
    ans.pop_back();
    //ans.pop_back();
    if(cnt)
        cout << ans << endl;
    else cout << "None" << endl;
    return 0;
}
/*
000099999888765 
*/