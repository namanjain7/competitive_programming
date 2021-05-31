
#include<bits/stdc++.h>
#define int long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))
#define mod 1e+7;

using namespace std;

//use this function to print a variable along with it's name
template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void tinp(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    return;
}

void stop_sync(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}



void solve(){
	int x, m, d;
	cin >> x >> m >> d;
	cout << min(x * m, x + d) << endl;
}

int32_t main(){
	
	
    //tinp();
    //by default the file is opened and closed in inputf.in and outputf.in
    //stop_sync();
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}


