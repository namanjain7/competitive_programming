#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum == x){
        cout <<"No" << endl;
        return;
    }
    
    cout << "Yes" << endl;
    sum = 0;
    for(int i = 0; i < n-1; i++){
        sum += a[i];
        if(sum == x){
            swap(a[i], a[i+1]);
            sum -= a[i+1];
            sum += a[i];
        }
         cout << a[i] << " ";
    }
    cout << a[n-1] << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}