
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

bool a_m(string s){
	for(auto i : s){
		int ascii = int(i);

		if(ascii < 97 || ascii > 109){
			return false;
		}
	}
	return true;
}

bool N_Z(string s){
	for(auto i : s){
		int ascii = int(i);
		if(ascii < 78 || ascii > 90){
			return false;
		}
	}
	return true;
}


void solve(){
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		//cout << s[0] << "\t" << int(s[0]) << endl;
		if(int(s[0]) >= 97 && int(s[0]) <= 109){
			if(!a_m(s)){
				cout << "NO" << endl;
				return;
			}
		}

		else if(int(s[0]) >= 78 && int(s[0]) <= 90){
			if(!N_Z(s)){
				cout << "NO" << endl;
				return;
			}
		} else{
			cout << "NO" << endl;
			return;
		}


	}
	cout << "YES" << endl;
}

void solve_2(){
	int n;
	cin >> n;
	string word;
	for(int i = 0; i < n; i++){
		cin >> word;
		int x = int(word[0]);
		if(x >=  97 && x <= 109){
			//do stuff
			for(auto itr : word){
				if(int(itr) < 97 || int(itr) > 109){
					cout << "NO" << endl;
					return;
				}
			}
		}
		else if(x >= 78 && x <= 90){
			for(auto itr : word){
				if(int(itr) < 78 || int(itr) > 90){
					cout << "NO" << endl;
					return;
				}
			}
		}
		else {
			cout << "NO" << endl;;
			return;
		}
	}
	cout << "YES" << endl;
	return;
}


void solve_3(){
	int k;
	cin >> k;
	for(int i = 0; i < k; i++){
		string s;
		cin >> s;
		
		int size = s.size();
		
		if(int(s[0]) >= 97 && int(s[0]) <= 109)
		for(int i = 0;i < size; i++){
			if(int(s[i]) >= 97 && int(s[i]) <= 109){
				continue;
			}
			else{
				cout << "NO" << endl;
				return;
			}
		}
		else if(int(s[0]) >= 78 && int(s[0]) <= 90)
		for(int i = 0;i < size; i++){
			if(int(s[i]) >= 78 && int(s[i]) <= 90){
				continue;
			}
			else{
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
	return;
}

int32_t main(){
	
	
    //tinp();
    //by default the file is opened and closed in inputf.in and outputf.in
    //stop_sync();
    int t;
    cin >> t;
    while(t--) solve_3();
}


