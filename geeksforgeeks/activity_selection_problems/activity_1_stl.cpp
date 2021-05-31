#include<iostream>
#include<queue>
using namespace std;

void solve(){
	int n; cin >> n;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
	for(int i = 0; i < n; i++){
		int first, second;
		cin >> first >> second;
		p.push(make_pair(first, second));
	}

	auto temp = p.top();
	cout << temp.first << " " << temp.second << endl;
	p.pop();
	while(!p.empty()){
		auto itr = p.top();
		p.pop();
		cout << (itr).first << " " << (itr).second << endl;
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t; cin >> t;
	while(t--) solve();
}