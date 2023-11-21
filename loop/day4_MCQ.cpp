#include <bits/stdc++.h>
using namespace std;

#define DEBUG true

int main(){
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    int n1 = s1.size(),n2 = s2.size(), cnt = 0; 
    if(DEBUG){
        cout << s1 << " " << s2 << endl;
        cout << n1 << " " << n2 << endl;
    }
    if(n1 != n2){
        cout << "Incomplete answer" << endl;
        return 0;
    }   
    for(int i=0; i < n1; i++){
        if(s1[i] == s2[i])cnt++;
    }
    cout << cnt;
    return 0;
}