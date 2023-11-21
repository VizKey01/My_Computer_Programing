#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;
    getline(cin, s);
    int n = s.size();
    for(int i = 0; i < n;i++){
        if(s[i] == ']')
            s[i] = ')';
        else if(s[i] == '(')
            s[i] = '[';  
        else if(s[i] == ')')
            s[i] = ']';
        else if(s[i] == '[')
            s[i] = '(';  
    }
    cout << s;
}