#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

void sol1(){
    //a = ตัวคูณ b = เลขทศนิยมไม่ซ้ำ c = จำนวนทศนิยมซ้ำ 
    //d = จำนวนทศนิยมไม่ซ้ำ N = เลขทศนิยมทั้งหมด
    // N - b / 9*c * 10*d
    string A,B,C;
    int a = 0,b = 0,c = 0,d = 0,F,H,n = 0,N = 0;
    cin >> A >> B >> C;

    string S = B + C;
    //convert N to number
    n = B.size() + C.size();
    int cnt = n - 1;
    for(int i = 0;i < n;i++){
        N += (S[i] - 48) * (pow(10,cnt));
        cnt--;
    }

    //convert B to number
    n = B.size(),cnt = n - 1; 
    for(int i = 0;i<n;i++){
        b += (B[i] - 48) * pow(10,cnt - C.size());
        cnt--;
    }

    //convert A to number
    n = A.size(),cnt = n - 1;
    for(int i = 0;i < n;i++){
        a += (S[i] - 48) * (pow(10,cnt));
        cnt--;
    }

    if(B.size() == 1 && B[0] - 48 == 0){
        d = 0;
    } 
    else d = B.size();
    if(C.size() == 1 && C[0] - 48 == 0){
        c = 0;
    }
    else c = C.size();

    H = (9 * c) * (pow(10,d));
    F = (a * H) + N - d;
    int x = gcd(F,H);
    F /= x;
    H /= x;
    //cout << A << B.size() << C.size() << endl;
    //cout << N << " " << b << " " << a << " " << d << " " << c;
    cout << F << " " << '/' << " " << H;
}

void sol2(){
    int x=0,y=0,z=0,w=0,up = 0,down = 0;
    string A, B, C;
    cin >> A >> B >> C;
    int n = B.size() + C.size();
    string s = B + C;
    for(int i = 0;i < n;i++){
        x += (s[i] - 48) * pow(10,n-i-1);
    }

    n = B.size();
    for(int i = 0;i < n;i++){
        y += (B[i] - 48) * pow(10,n-i-1);
    }

    if(B[0] = '0' && B.size() == 1){
        z = 0;
    }
    else{
        z = B.size();
    }
    if(C[0] = '0' && C.size() == 1){
        w = 0;
    }
    else{
        w = C.size();
    }
    
    n = B.size() + C.size();
    for(int i = 0;i < w;i++){
        down += 9 * pow(10,w-i-1);
    }
    for(int i = 0;i < z;i++){
        down *= 10;
    }

    int a = 0;
    n = A.size();
    for(int i = 0;i < n;i++){
        a += (A[i] - 48) * pow(10,n-i-1);
    }
    
    up = (a * down) + x - y;
    int lol = gcd(up,down);

    cout << up/lol << " / " << down/lol;
}

void sol3(){
    int x=0,y=0,z=0,w=0,up = 0,down = 0;
    string A, B, C;
    cin >> A >> B >> C;

    int div = 1;
    int n = B.size() + C.size();
    for(int i=0; i<n; i++) 
        div *= 10;

    int fract = (stoi(A) * pow(10,B.size())) + stoi(B);
    int tmp = fract;
    fract = fract * pow(10,C.size()) + stoi(C);
    div = div - pow(10,B.size());
    fract = fract - tmp;
    int x = gcd(fract,div);
    cout << fract/x << " / " << div/x;

}

int main(){
    sol3();    
}
//test case
/*
7 0 0
0 0 0
0 02 27
*/