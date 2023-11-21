#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //vector<int> v;
    int x, temp = 0;
    cin >> x;
    int v[x + 5];
    for(int i = 0; i < x; i++){
        cin >> v[i];
    }
    for(int i = 1; i < x - 1; i++){
        if(v[i] > v[i - 1] && v[i] > v[i + 1]){
            temp++;
        }
    }
    cout << temp;
    return 0;
}
