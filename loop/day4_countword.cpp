#include <bits/stdc++.h>
using namespace std;
 
void cal(string pat, int M, int lps[]) {
 
    int len = 0;
    int i = 1;
    lps[0] = 0;

    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = len;
                i++;
            }
        }
    }
}
 
int sol(string pat, string txt) {
    int M = pat.length();
    int N = txt.length();
    int lps[M];
    int j = 0;
 
    cal(pat, M, lps);
 
    int i = 0;
    int res = 0;
    int next_i = 0;
 
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {
            j = lps[j - 1];
            res++;
        }
        else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

bool check2(string txt, int i, int n) {
    if(
        (txt[i + n] < 'A' && txt[i + n] > 'Z' 
        && txt[i + n] < 'a' && txt[i + n] > 'z')
    ) return true;
    return false;
}

bool check1(string txt, int i, int n) {
    if(
        (txt[i - 1] < 'A' && txt[i - 1] > 'Z' 
        && txt[i - 1] < 'a' && txt[i - 1] > 'z')
    ) return true;
    return false;
}


int sol2(string pat, string txt){
    int n = txt.size();
    int N = pat.size();
    int cnt = 0,temp = 0;
    for(int i = 0; i < n;i++){
        if(txt[i] == pat[0] && check1(txt, i, N) && check2(txt, i, N)){
            for(int j = 0; j < N; j++){
                if(pat[j] == txt[i + j]){
                    temp++;
                    //cout << txt[i + j];
                }
                else{
                    temp = 0;
                    break;
                }    
            }
            if(temp == N)cnt++;
            //cout << " ";
            temp = 0;
        }
    }
    return cnt;
}

int sol3(string str)
{
  // Check if the string is null
  // or empty then return zero
  if (str.size() == 0) {
    return 0;
  }
  // Splitting the string around
  // matches of the given regular
  // expression
  vector<string> words;
  string temp = "";
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ') {
      words.push_back(temp);
      temp = "";
    }
    else {
      temp += str[i];
    }
  }
 
  int count = 1;
 
  for (int i = 0; i < words.size(); i++) {
    if (words[i].size() != 0)
      count++;
  }
 
  // Return number of words
  // in the given string
  return count;
}

void sol4(){
     char str[200], word[20];
    int i=0, j, temp, countW=0, chk;
    gets(word);
    gets(str);
    
    while(str[i]!='\0')
    {
        temp = i;
        j=0;
        while(word[j]!='\0')
        {
            if(str[i]==word[j])
                i++;
            j++;
        }
        chk = i-temp;
        if(chk==j)
            countW++;
        i = temp;
        i++;
    }
    cout << countW;
}

bool choo(char a, char b){
    if((a == ' ' || a == '(' ||
        a == ')' || a == ',' ||
        a == '.' || a == '\'' ||
        a == '\"') && 
        (b == ' ' || b == '(' ||
        b == ')' || b == ',' ||
        b == '.' || b == '\'' ||
        b == '\"')){
    return true;
    }
    return false;
}

void soly(){
    string word;
    string s;
    getline(cin , word);
    getline(cin, s);
    int cnt=0,n = word.size();
    size_t pos = s.find(word, 0);
    while(pos != string::npos)
    {   
        //cout << s[pos+n] << endl;
        /*
        if(choo(s[pos-1],s[pos+n])){
            cnt++;
            pos = s.find(word, pos+1);
        }*/
        cnt++;
            pos = s.find(word, pos+1);
    }
    cout<<cnt<<endl;
    /*
    int n = s.find(word);
    cout << n;*/
}

void solory(){
    string w,s;
    int cnt = 0,num = 0;
    getline(cin, w);
    getline(cin, s);
    int ns = s.size();
    int nw = w.size();
    for(int i = 0;i < ns;i++){
        if(s[i] == w[0] && choo(s[i-1], ' ')){
            for(int j = i;j < i + nw;j++){
                if(s[j] != w[cnt] || choo(s[j - 1], s[j + nw])){
                    i += nw;
                    break;
                }
            }
            num++;
            cnt = 0;
        }
    }
    cout << num;
}

void selalo(){
    string word, s;
    getline(cin, word);
    getline(cin, s);
    int n = s.size();
    for(int i = 0; i < n; i++){
        
    }
    
}

int main() {   
    ios_base::sync_with_stdio(false); cin.tie(0);
    // string txt;
    // string pat;
    // getline(cin, pat);
    // getline(cin, txt);
    // //int ans = sol(pat, txt);
    // int ans = sol2(pat, txt);
    // //int ans = sol3(pat, txt);
    // //sol4();
    // cout << ans;
    //soly();
    //solory();
    selalo();
    return 0;
}
 