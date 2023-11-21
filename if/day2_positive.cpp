#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x > 0){
        cout << "positive" << endl;
    }
    else if(x == 0){
        cout << "zero" << endl;
    }
    else{
        cout << "negative" << endl;
    }
    if(x % 2 == 0){
        cout << "even";
    }
    else cout << "odd";
}