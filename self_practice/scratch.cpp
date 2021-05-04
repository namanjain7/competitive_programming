#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;

    //logic
    int count = 0;
    while(n > 1){
        if(n%10 == 4){
            count++;
        }
        n /= 10;
    }
    cout << count;
    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}