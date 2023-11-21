#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sd second


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
  vector<string> sale;  
  vector<double> price;
    string s;
    double x, N = 0;
    while(true){
        cin >> s;
        if(s == "END") break;
        cin >> x;
        sale.push_back(s);
        price.push_back(x);
        N++;
    }
  vector<pair<double, string>> v(N);
    vector<int> cnt(N, 0);
    //memset(cnt, 0, N);
    //cout << v[0].sd << " " <<  v[0].fs;
  int tom = 0;
  for (int i = 0;i < N;i++) 
    v[i].sd = sale[i];
  
  while(cin >> s){
    for(int i = 0;i < N;i++){
      if(v[i].sd == s){
        tom++;
        v[i].fs -= price[i];
        break;
      }  
    }
  }
  
  if(tom == 0){
    cout << "No Sales";
    return 0;
  }
  sort(v.begin(), v.end());
  if(N > 3) N = 3;
  for(int i = 0;i < N;i++){
    if(v[i].fs == 0)return 0;
    cout << v[i].sd << " " << v[i].fs * -1 << endl;
  }
  
    return 0;
}

/*
A 10.0
B 20.0
C 15.0
D 100.0
E 20.0
END
A A A A B B A A A X Y Z


P01 10.25
P03 50.0
Px11 20.0
A14 25.0
END
P01 P01 Px11 P01 P01 P03 P01 A14 XX A14 P01 P01

*/