#include <bits/stdc++.h>
using namespace std;

void print2(vector<int> x, int n){
    for(int i = 0; i < n;i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

void print(int x[], int n){
    for(int i = 0; i < n;i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

bool check(int x[], int n){
    int tem = x[0];
    for(int i = 1; i < n;i++){
        if(x[i] < tem) return false;
        tem = x[i];
    }
    return true;
}

int find_mx(int x[], int n, int start){
    int mx = 0;
    for(int i = 0; i < n - start; i++)
        mx = max(mx, x[i]);
    //cout <<"::" << mx << endl;
    return mx;
}

void sol2(int n){
    int mx = 0;
    vector<int> arr(n);
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
    }

    print2(arr, n);

    for(int i = n - 1; i > 0; i--){
        mx = max_element(arr.begin(), arr.begin() + i + 1) - arr.begin();

        if(mx != i){

            if(mx != 0){
                reverse(arr.begin(), arr.begin() + mx + 1);
                print2(arr, n);
            }

            reverse(arr.begin(), arr.begin() + i + 1);
            print2(arr, n);
        }
    }
}

void sol(int n){
    int arr[n + 1], mx = 0;
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    print(arr, n);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n - i;j++){
            //cout << j << " : " ;
            if(arr[j] == mx){
                if(j == 0) { //top
                    reverse(arr, arr + n - i);
                    print(arr, n);
                    mx = find_mx(arr, n , i+1);
                    //cout << "e " << i << endl;
                    break;
                }
                else if(j == n - i - 1) { //bottom
                    mx = find_mx(arr, n , i+1);
                    //cout << "c " << i << endl; 
                    break;
                }
                else {
                    reverse(arr, arr + j + 1);
                    print(arr, n);
                    reverse(arr, arr + n - i);
                    print(arr, n);
                    mx = find_mx(arr, n , i+1);
                    //cout << "d " << i << endl;
                    break;
                }
            }
        }
        if(check(arr, n)) break;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    //sol(n);
    sol2(n);
    /*
    int ar[] = {1,2,3,4,5,6};
    reverse(ar, ar + n);
    for(int i = 0 ;i <6 ;i++){
        cout << ar[i] << " "; 
    }*/
    return 0;
}

/*
    int arr[n + 1], mx = 0, pos = 0;
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
        if(arr[i] > mx){
            mx = arr[i];
            pos = i;
        }
    }
    int temp[n+1], cnt = 0;
    for(int i = 0; i < n - cnt; i++){
        if(arr[i] == mx){
            for(int j = n - cnt; j >= 0; j--){
                temp[j] = arr[n - cnt - j - 1];
            }
            cnt++;
            for(int k = 0; k < n; k++){
                cout << temp[k] << " ";
            }
        }
    }
    */