#include <bits/stdc++.h>
using namespace std;

int main(){
  int d=0,m=0,y=0,num = 1000;
  string mount[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP"," OCT", "NOV", "DEC" };
  string s;
  cin >> s;
  int n = s.size();
  if(s[0] - 48 == 0){
    d = (s[1] - 48);
  }
  else{
    d = ((s[0] - 48) * 10) + (s[1] - 48);
  }
  
  if(s[3] - 48 == 0){
    m = (s[4] - 48);
  }
  else{
    m = 10 + (s[4] - 48);
  }
  for(int i=6;i<n;i++){
    y += (s[i] - 48) * num;
    num /= 10;
  }
  y -= 543;
  //cout << d << " " << m << " " << y << endl;
  cout << mount[m-1] << " "<< d << ", " << y;
}
//12/01/2562