#include<bits/stdc++.h>
using namespace std;

int tc = 0;

void solve(){
    tc++;
    int n;
    string st;
    cin >> n >> st;
    int arr[n] = {1};
    for(int i = 1; i < n; i++){
        if(st[i] > st[i-1]){
            arr[i] = arr[i-1] + 1;
        }
        else arr[i] = 1;
    }
    cout << "Case #" << tc << ":";
    for(int i = 0; i < n; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}