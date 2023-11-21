#include <bits/stdc++.h>
using namespace std;
    
vector<int> v;

void print(){
    int n = 0;
    if(v.size() > 15) n = v.size() - 15;
    for(int i = n; i<v.size() - 1 ; i++){
        cout << v[i] << "->";
    }
    cout << 1;
}

int sol(int n){
   if(n == 1) {
        print();
        return 0;
    }
   else if(n % 2 == 0) {
        n /= 2;
        v.push_back(n);
        return sol(n);
    }
   else{
        n = 3 * n + 1;
        v.push_back(n);
        return sol(n);
   } 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    v.push_back(n);
    sol(n);
    return 0;    
}