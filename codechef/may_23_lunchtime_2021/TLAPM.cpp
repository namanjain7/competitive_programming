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

int inf[1001][1001];

void pre(){
    for(int i = 1; i < 1001; i++){
        inf[i][1] = (i * (i + 1)) / 2;
        for(int j = 2; j < 1001; j++){
            inf[i][j] = inf[i][j-1] + (j - 1) + (i - 1);
        }
    }
    return;
}

void printmat(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << inf[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(){
    int i1, c1, i2, c2;
    cin >> i1 >> c1 >> i2 >> c2;
    pre();
    int sum = 0;
    for(int i = i1; i <= i2; i++){
        sum += inf[i][c1];
    }
    cout << endl;
    for(int j = c1+1; j <= c2; j++){
        sum += inf[i2][j];
    }
    cout << sum << endl;
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