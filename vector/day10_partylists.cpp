#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<tuple<double, int, int, string> > v;
    //cal score members partys
    double allavg = 0, allseat = 0, cnt = 0;
    while(cin >> s){
        if(s == "END") break;
        int score;
        cin >> score;
        v.push_back({0, score, 0, s});
        allavg += score;
        cnt++;
   }
   
   allavg /= 100;
   for(int i = 0; i < v.size(); i++){
        get<0>(v[i]) = get<1>(v[i]) / allavg; //1
        int member = int(get<0>(v[i]));        //2
        get<0>(v[i]) = get<0>(v[i]) - member;  //3
        get<2>(v[i]) = member;
        allseat += member;    
   }

   vector<tuple<int, int, string> > ans;
   sort(v.begin(), v.end(), greater<double>());
    for(int i = v.size() - 1; i >= 0; i--){
        if(allseat < 100){ // 4
            get<2>(v[i])++;
            allseat++;
        }
        if(get<2>(v[i]) > 0){
            ans.push_back({get<1>(v[i]),get<2>(v[i]),get<3>(v[i])});
        }
   }

   sort(ans.begin(), ans.end(), greater<int>());
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << get<2>(ans[i]) << " " << get<1>(ans[i]);
        cout << " " << get<0>(ans[i]) << endl;
    }
   return 0;
}

/*
AA 100000
BB 120000
CC 170000
DD 550
EE 250000
FF 7000
GG 6300
END
*/