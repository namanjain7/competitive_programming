#include<bits/stdc++.h>


void solve(){
	std::string s;
	std::cin >> s;
	std::set<char> se;
	int n = s.length();
	std::string a;
	for(int i = 0; i < n; i++){
		if(se.find(s[i]) != se.end()){
			continue;
		}
		else{
			a = a + s[i];
			se.insert(s[i]);
		}
	}
	std::cout << a << "\n";
}

int main(){
	int t;
	std::cin >> t;
	while(t--){
		solve();
	}
}
