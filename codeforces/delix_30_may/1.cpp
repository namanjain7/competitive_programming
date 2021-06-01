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
	int n, m;
	cin >> n >> m;
	string state;
	cin >> state;
	int arr[n];
	for(int i = 0; i < n; i++){
		if(state[i] == '1')arr[i] = 1;
		else arr[i] = 0;
	}


	//logic
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr[j] == 1) continue;

			if(n >= 2){
				if(j == 0 && arr[1] == 1){
					arr[0] = 1;
					continue;
				}
				if(j == n-1 && arr[j-1] == 1){
					arr[j] = 1;
					continue;
				}
			}
			if(arr[j-1] == 1 || arr[j+1] == 1){
				arr[j] = 1;
			}

		}

	}


	string ans;
	for(int i = 0; i < n; i++){
		if(arr[i] == 1) ans += '1';
		else ans += '0';
	}
	cout << ans << endl;


}

int32_t main(){
	
	
    //tinp();
    //by default the file is opened and closed in inputf.in and outputf.in
    stop_sync();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}


