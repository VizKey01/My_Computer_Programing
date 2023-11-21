#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string s;
        getline(cin, s);
        //char key[26 + 5];
        int cnt[26 + 5];
        memset(cnt, 0, sizeof(cnt));
        int n = s.size();
        for(int i = 0; i < n; i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || 
            (s[i] >= 'a' && s[i] <= 'z')){
                if(s[i] < 'Z') s[i] += 32;
                //key[s[i] - 97] = s[i];
                cnt[s[i] - 97]++;
            }
        }
        for(int i = 0; i < 26;i++){
            if(cnt[i] == 0) continue;
            cout << (char)(i + 97) << " -> " << cnt[i] << endl;
        }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin, s);
    //map<char, int> m;
    int arr[500];
    memset(arr, 0, sizeof(arr));
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(isalpha(s[i])){
            arr[towlower(s[i])]++;
        }
    }
    for(int i = 'a'; i <= 'z';i++){
        if(arr[i] == 0) continue;
        cout << (char)(i) << " -> " << arr[i] << endl;
    }
    return 0;
}
