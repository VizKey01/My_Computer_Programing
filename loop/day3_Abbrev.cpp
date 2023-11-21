#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug 0

double cal(int n, int val, string s, int num){
    ll v = 0;
  //int v = stoi(s);
  for(int i = 0; i < n;i++){
    v += (s[i] - 48) * pow(10,n - i - 1);
  }
  ll m = v / val; 
  double ans = 0.0;
  v %= val;
  ans += m;
  
  ans += v * pow(10,-num);
  if(debug)cout << m << " " << v << " " << ans << endl;
  if(n == 4 || n == 7 || n == 10){
    return round(ans * 10) / 10.0;
  }
  else{ 
    return round(ans); 
  }
}

void sol(){
  int x;
  string s;
  cin >> s;
  int n = s.size();
  if(n > 9){
    cout << cal(n, 1e9, s, 9) << 'B';
  }
  else if(n > 6){
    cout << cal(n, 1e6, s, 6) << 'M';
  }
  else if(n > 3){
    cout << cal(n, 1e3, s, 3) << 'K';
  }
  else{
    cout << s;
  }
}

int main(){
  //topten1();
  sol();
  return 0;
}