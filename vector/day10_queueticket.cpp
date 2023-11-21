#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(true);cin.tie(0);
    int n;
    cin >> n;
    string reset;
    int number, cnt = 0 ,cntq = 0;
    double ans = 0;
    cin >> reset >> number;
    queue<pair<int,int> > q;
    for(int i = 0; i < n - 1;i++){
        string order;
        cin >> order;
        if(order == "new"){
            int time;
            cin >> time;
            q.push({time, number}); //add queue
            cout << ">> ticket " << number << endl;
            number++; //increment number
        }
        else if(order == "next"){
            if(cntq == 1){ // skip queue
                q.pop();
            }
            cout << ">> call " << q.front().second << endl;
            cntq = 1; //inqueue
        }
        else if(order == "order"){
            int time;
            cin >> time;
            time = time - q.front().first;
            ans += time;
            cnt++, cntq = 0; //++order and reset q count
            cout << ">> qtime " << q.front().second << " " << time << endl;
            q.pop();
        }
        else{
            //ans /= cnt; //cal average
            //cout << cnt << endl;
            cout << ">> avg_qtime " << round((ans / cnt)*100)/100 << endl; 
        }
    }
    return 0;    
}/*
4
reset 301
new 1100
new 1110
next

8
reset 301
new 1100
new 1110
next
order 1120
next
order 1147
avg_qtime

14
reset 301
new 1100
new 1110
next
order 1120
new 1130
next
next
order 1161
avg_qtime
new 1170
next
order 1180
avg_qtime

*/