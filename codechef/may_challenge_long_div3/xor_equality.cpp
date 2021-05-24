#include<bits/stdc++.h>
#define int long long
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

int power(long long x, int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    long p = 1000000007;
    int ans = power(2, n-1, p);
    cout << ans << "\n";
    return;
}

int32_t main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}