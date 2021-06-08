#include<bits/stdc++.h>
#define int long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))
#define mod 1e+7;

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve(){

}

void tinp(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    return;
}

void _sync(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int32_t main(){

    tinp();
    _sync();
    int t;
    cin >> t;
    for(int i = 1;i <= t; i++){
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
