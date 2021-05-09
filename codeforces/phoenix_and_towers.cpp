#include<iostream>
#include<set>
#include<utility>

using namespace std;

void solve(){
    int n, m, x;
    cin >> n >> m >> x;
    int h[n];

    //logic
    cout << "YES\n";
    set<pair<int, int>> s;
    for(int i = 1; i <= m; i++) s.insert({0, i});

    for(int i = 0; i < n; i++){
        cin >> h[i];
        pair<int, int> p = *s.begin();
        s.erase(p);
        cout << p.second << " ";
        s.insert({p.first + h[i], p.second});
    }
    cout << "\n";
}

int32_t main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}