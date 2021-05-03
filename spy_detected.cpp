#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    if(a[0] != a[1] && a[1] == a[2]){
        cout << 1 << "\n";
        return;
    }
    if(a[n-3] == a[n-2] && a[n-2] != a[n-1]){
        cout << n << "\n";
        return;
    }

    for(int i = 1; i <= n-2; i++){
        if(a[i-1] == a[i+1] && a[i] != a[i-1]){
            cout << i+1 << "\n";
            return;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}