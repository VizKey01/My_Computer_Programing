#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sd second


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n = 0;
    string s, code;
    vector<pair<string, string>> grade;
    string G[] = {"A", "B+", "B", "C", "C+", "D", "D+", "F"};
    while(true){
        cin >> code;
        if(code == "q") break;
        cin >> s;
        grade.push_back({code, s});
        n++;
    }
    while(cin >> s){
        for(int i =0;i<n;i++){
            if(s == grade[i].fs){
                for(int j=0;j<8;j++){
                    if(grade[i].sd == G[j] && grade[i].sd != "A"){
                        grade[i].sd = G[j - 1];
                    }
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout << grade[i].fs << " " << grade[i].sd << endl;
    }
    return 0;
}