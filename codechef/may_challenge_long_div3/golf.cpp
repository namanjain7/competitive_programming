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
    int n, x, k;
    cin  >> n >> x >> k;
    if(x == 0 || x == n + 1 || x % k == 0) {
        cout << "Yes\n";
        return;
    }
    int temp = (n + 1) % k;
    temp = (x - temp) % k;
    if(temp == 0){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
    return;
}

void solve(){
    int n, x, k;
    cin >> n >> x >> k;
    int temp = 0;
    while(temp <= n + 1){
        if(temp == x){
            cout << "YES\n";
            return;
        }
        temp += k;
    }
    temp = n + 1;
    while(temp >= 0){
        if(temp == x){
            cout << "YES\n";
            return;
        }
        temp -= k;
    }
    cout << "NO\n";
    return;
}

int32_t main(){
/*ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/
    int t;
    cin >> t;
    while(t--) solve_2();

    return 0;
}