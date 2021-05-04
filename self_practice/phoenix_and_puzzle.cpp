#include<iostream>
#include<bitset>
#define int long long
using namespace std;
#define M 1000
void solve(){
    int n;
    cin >> n;

    //logic
    if(n == 1){
        cout << "NO\n";
        return;
    }
    int i = 2;
    while(i <= n){
        if(i == n){
            cout << "YES\n";
            return; 
        }
        i = i * i;
    }
    cout << "NO\n";
    return;
}

void solve_2(){
    int n;
    cin >> n;

    //logic
    if(n == 1){
        cout << "NO\n";
        return;
    }
    bitset<M> p;
    p = n;
    if(p.count() == 1) cout << "YES\n";
    else cout << "NO\n";
    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--) solve_2();
    return 0;
}