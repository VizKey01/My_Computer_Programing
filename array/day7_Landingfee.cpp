#include <bits/stdc++.h>
using namespace std;
#define s(); ios_base::sync_with_stdio(0);cin.tie(0); 


int main(){
    s();
    int n;
    cin >> n;
    int arr[n];
    string cnt[n];
    for(int i=0; i<n; i++){
        cin >> cnt[i] >> arr[i];
    }
    string trip;
    cin.ignore(1000, '\n');
    getline(cin, trip);
    //cout << trip << endl;
    string temp = ""; 
    temp += trip[4];
    temp += trip[5];
    //cout << temp;
    int val = 0;
    for(int i=11; i<trip.size(); i += 7){
        string tom = "";
        tom += trip[i];
        tom += trip[i+1];
        //cout << tom << " " << temp <<endl;
        if(temp != tom){
            //cout << 1 << endl;
            for(int j = 0;j < n;j++){
                //cout << cnt[i] << endl;
                if(tom == cnt[j]){
                    val += arr[j];
                    break;
                }
            }
            temp = tom; 
        }
        
        //cout << trip[i] << trip[i+1] << endl;
    }
    cout << val;
    return 0;
}