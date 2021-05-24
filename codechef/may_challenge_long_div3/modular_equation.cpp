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

void solve_2(){
    cout << 9 % 1 << endl;
}

void solve(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    for(int b = n; b > 0; b--){
        int mb = m % b;
        mb = m - mb;
        for(int a = b-1; a > 0; a--){
            int temp = mb % a;
            if(temp == 0) count++;
        }
    }
    cout << count << endl;
    return;
}

int32_t main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve_2();
    return 0;
}