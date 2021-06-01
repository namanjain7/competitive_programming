
#include<bits/stdc++.h>
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
	int k; cin >> k;
	bool ans = false;
	for(int i = 0; i < k ; i++){
		string s; cin >> s;
		if(ans)
		bool first = false, second = false;
		for(auto ch : s){
			if(ch >= 'a' && ch <= 'm') first = true;
			else if(ch >= 'N' && ch <= 'Z') second = true;
		}
	}
}

int32_t main(){
	
	
    //tinp();
    //by default the file is opened and closed in inputf.in and outputf.in
    //stop_sync();
    int t;
    cin >> t;
    while(t--) solve_3();
}


