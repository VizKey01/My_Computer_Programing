#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s1[] = {"Robert","William","James",
                "John","Margaret","Edward","Sarah",
                "Andrew","Anthony","Deborah"};
    string s2[] = {"Dick","Bill","Jim","Jack","Peggy",
                "Ed","Sally","Andy","Tony","Debbie"};
    int n, ch = 0;
    cin >> n;
    string temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        for(int j=0; j<10; j++){
            if(temp == s1[j]){
                cout << s2[j] << endl;
                ch = 0;
                break;
            }
            else if(temp == s2[j]){
                cout << s1[j] << endl;
                ch = 0;
                break;
            }
            else
                ch++;
        }
        if(ch != 0)cout << "Not found " << endl;
    }
    return 0;
}
