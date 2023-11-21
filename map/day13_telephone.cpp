#include <bits/stdc++.h>
using namespace std;
#define pis pair<string, string>
#define pi pair<int, int>
#define fs first
#define se second


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    map<string, string> m;
    for(int i = 0; i < n;i++){
        string s,ss,phone;
        cin.ignore(256, '\n');
        cin >> s >> ss >> phone;
        //getline(cin, s);
        //getline(cin, phone);
        s += " " + ss;

        m.insert(pis(s, phone));
        m.insert(pis(phone, s));
    }

    cin >> n;
    cin.ignore(256, '\n');
    for(int i = 0; i < n; i++){
        string s = "";
        getline(cin, s);
        auto it = m.find(s);
        //cout << " : : " +s << endl;
        cout << s << " --> ";
        if(it == m.end()) cout << "Not found" << endl;
        else cout << it->second << endl;        
    }
    return 0;
}