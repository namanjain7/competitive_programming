
#include<bits/stdc++.h>
#define push_back pub
#define pop_back pob


typedef long long ll;
#define sx 345
#define dlk "sdlkjf"
typedef int nonsense;


#define print(name) print_(#name, (name))

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
	ll n = 10e2;
	nonsense y = 3;
	cout << n << " " << sx << " " << dlk << " " << y;
}

int32_t main(){
	
	
    //tinp();
    //by default the file is opened and closed in inputf.in and outputf.in
    //stop_sync();
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}


