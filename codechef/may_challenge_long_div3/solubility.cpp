#include<bits/stdc++.h>
#define int long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve(){
    int x, a, b;
    cin >> x >> a >> b;
    int temp = 100 - x;
    cout << (temp * b + a) * 10 << "\n";
}

int32_t main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}