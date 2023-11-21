#include <bits/stdc++.h>
using namespace std;

int sol()
{
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    vector<int> v1, v2;
    cin >> n;
    for(int i=0; i<n; i++){
        int tim,temp;
        cin >> temp >> tim;
        v1.push_back(temp);
        v2.push_back(tim);
    }
    string s;
    int mn = 1e6,mx = -1e6;
    cin >> s;
    if(s[1] == 'i'){
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                mx = max(mx, v2[i]);
                mn = min(mn, v1[i]);
            }   
            else{
                mn = min(mn, v2[i]);
                mx = max(mx, v1[i]);
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                mx = max(mx, v1[i]);
                mn = min(mn, v2[i]);
            }   
            else{
                mn = min(mn, v1[i]);
                mx = max(mx, v2[i]);
            }
        }
    }
    cout << mn << ' ' << mx;
    return 0;
}
