#include <bits/stdc++.h>
using namespace std;


vector<string> split(string line, char delimiter) {
    vector<string> s;
    string word;
    int len = line.length(), cnt = 0;
    for(int i = 0; i < len; i++){
        if(line[i] == delimiter){
            for(int j = i+1; j < len; j++){
                if(line[j] == delimiter || j == len-1){
                    s.push_back(word);
                    i = j+1;
                    cout << word << endl;
                    word.clear();
                    break;
                }
                word += line[j];
            }
        }
        else word += line[i];
    }
    return s;
}
/*
6/6/2566
/
*/
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    char temp;
    getline(cin, s);
    //getline(cin, temp);
    cin >> temp;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> S = split(s, temp);
    
    int n = S.size();
    for(int i = 0; i < n;i++) {
        cout << '(' << S[i] << ')';
    }
    return 0;    
}
