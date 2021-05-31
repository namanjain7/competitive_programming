#include<bits/stdc++.h>
#define int long long int
#define print(name) print_(#name, (name))
using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 2){
        cout << "YES\n";
        return;
    }
    set<char> st;
    for(auto i = s.begin(); i < s.end(); i++){
        if(st.count(*i) != 0) {
            cout << "NO\n";
            return;
        }
        char current = *i;
        st.insert(current);
        i++;
        while(*i == current) i++;
    }
    cout << "YES\n";
}

int32_t main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}