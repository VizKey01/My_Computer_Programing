#include<bits/stdc++.h>
using namespace std;
 
string cal(string s1, string s2){
    if (s1.length() > s2.length())
        swap(s1, s2);
    string s = "";
    int n1 = s1.length(), n2 = s2.length();
    int diff = n2 - n1;
    int tmp = 0;

    for (int i= n1 - 1; i >= 0; i--){
        int sum = ((s1[i] - '0') + (s2[i + diff] - '0') + tmp);
        s.push_back((sum % 10) + '0');
        tmp = sum/10;
    }
 
    for (int i= n2 - n1 - 1; i >= 0; i--)
    {
        int sum = ((s2[i] - '0')+tmp);
        s.push_back((sum % 10) + '0');
        tmp = sum / 10;
    }
 
    if (tmp)
        s.push_back(tmp+'0');

    reverse(s.begin(), s.end());
    return s;
}
 
// Driver code
int main()
{
    string s;
    string temp;
    int mx = 0;
    cin >> temp;
    while(true){
        cin >> s;
        if(s == "END" || temp == "END"){
            cout << temp << endl;
            break;
        }
        //cout << temp << " " << s << endl;
        temp = cal(temp, s);
    }
    return 0;
}
/*
9
90
900
1
END

*/