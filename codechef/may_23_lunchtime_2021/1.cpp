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
    int D, d, a, b, c;
    cin >> D >> d >> a >> b >> c;
    int prize = d * D;
    int num = 0;
    if(prize >= 10) num++;
    if(prize >= 21) num++;
    if(prize >= 42) num++;
    cout << num << endl;
    return;
}

int32_t main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

//ios_base::sync_with_stdio(false);
//cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0;i < t; i++){
        solve();
    }

    return 0;
}