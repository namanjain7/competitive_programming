#include<bits/stdc++.h>
#define ll long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))
using namespace std;

bitset<100005> b;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve(){
    b.reset();
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll k;
    cin >> k;
    b[0] = 1;
    for(auto i : arr){
        b |= b << i;
    }
    string s = "";
    for(ll i = 1; i <= k; i++){
        s.append((b[i] == true) ? "1" : "0");
    }
    cout << s << endl;
}

int32_t main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}