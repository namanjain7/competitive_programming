#include<iostream>
#include<algorithm>
using namespace std;
#define print(name) print_(#name, (name))

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve(){
    int n, l, r;
    cin >> n >> l >> r;/*
    vector<int> left, right;
    left.reserve(l);
    right.reserve(r);
    for(int i = 0; i < l; i++) cin >> left[i];
    for(int i = 0; i < r; i++) cin >> right[i];*/


    //logic
    int sum = ((l > r) ? l : r) - (n/2);
    print(sum);


    cout << sum << "\n";
}

int32_t main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}