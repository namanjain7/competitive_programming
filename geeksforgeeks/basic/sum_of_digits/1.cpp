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

class oneLine{
public:
    void compute_digit_sum(int n){
        int sum;
        for(sum = 0; n > 0; sum += n % 10, n /= 10);
        cout << sum;
        return;
    }
};

class oneLine_recursive{
public:
    void compute_digit_sum(int n){
        cout << rec(n);
    }
    int rec(int n){
        return (n > 0) ? (n % 10) + rec(n/10) : 0;
    }
};

void solve_2(){
    int n;
    cin >> n;
    oneLine_recursive s;
    s.compute_digit_sum(n);
}

int solve_3_rec(int n, int val){
    if(n < 10){
        val += n;
        return val;
    }
    return solve_3_rec(n/10, val + (n % 10));
}

void solve_3(){
    int n; cin >> n;
    cout << solve_3_rec(n, 0);
}

void solve_1(){
    oneLine s;
    int n;
    cin >> n;
    s.compute_digit_sum(n);
    return;
}

void solve(){
    int n;
    cin >> n;
    
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n = n / 10;
    }
    cout << sum;

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
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        solve_3();
        cout << "\n";
    }

    return 0;
}