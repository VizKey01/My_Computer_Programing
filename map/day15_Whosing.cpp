#include<bits/stdc++.h>
using namespace std;
#define pis pair<string, vector<string> >
#define pi pair<int, int>
#define fs first
#define se second


int main(){
    int n;
    cin >> n;
    string s;
    map<string, vector<string> > m;
    cin.ignore(256, '\n');
    for(int i = 0; i < n; i++){
        string ss;
        getline(cin, s);
        int N = s.size();
        for(int j = 0; j < N; j++){
            if(s[j] == ','){
                ss = s.substr(j+2, N-1);
                s = s.substr(0, j);
                break;
            }
        }

        m[s].push_back(ss);
    }

    //message
    getline(cin, s);
    n = s.size();
    //cout << s << endl;
    string temp = "";
    
    for(int i = 0;i < n;i++){
        if(s[i] == ',' || i >= n-1){
            if(i >= n-1){
                temp += s[i];
            }


            if (m.find(temp) == m.end()){
                cout << temp << " -> " << "Not found" << endl;
            }
            else {
                cout << temp << " -> " ;
                int nn = m[temp].size();
                for(int j = 0; j < nn; j++){
                    cout << m[temp][j];
                    if(j < nn - 1)
                        cout << ", ";
                }
                cout << endl;
            }
            i++;
            temp = "";
        }
        else temp += s[i];
    }
    
    return 0;   
}