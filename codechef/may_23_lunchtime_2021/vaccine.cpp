#include<bits/stdc++.h>
#define ll long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve(){
    int g, p, x[10];
    cin >> g >> p;
    for(int i = 0; i < 10; i++)
        cin >> x[i];

    int min, max;
    int sum = 0;
    for(int i = g; i < 10; i++) sum += x[i];
    min = (sum / p) + 1;
    max = (sum + x[g-1]);
    if(max % p == 0) max = max / p;
    else max = (max / p) + 1; 
    cout << min << " " << max << endl;
    return;
}

void cc(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
}

int32_t main(){
    //void cc();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    for(int i = 0;i < t; i++){
        solve();
    }

    return 0;
}