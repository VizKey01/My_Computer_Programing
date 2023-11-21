#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> m;
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        string s,ss;
        cin >> s >> ss;
        
        m.insert(pair<string, string>(s, ss));
        m.insert(pair<string, string>(ss, s));
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        auto it = m.find(s);
        if(it == m.end()) cout << "Not found" << endl;
        else {
          cout << it->second << endl;   
        }

    }

}