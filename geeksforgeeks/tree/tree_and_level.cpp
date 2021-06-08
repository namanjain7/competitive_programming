#include<iostream>
#include<vector>
using namespace std;

#define endl '\n'
#define tab '\t'
#define sp ' '
#define fi first
#define se second
#define forr(i,l,r) for(int i = l; i < r; i++)
#define sz(a) (int)a.size()
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define pub push_back


int odd = 0;
int even = 0;

void dfs(int curr, vvi &graph, vector<bool> &visited, int lvl, vi &values){
	visited[curr] = true;
	//cout << curr << endl;
	if(lvl % 2 == 0){
		even += values[curr];
	}
	else{
		odd += values[curr];
	}
	for(int child : graph[curr]){
		if(!visited[child]){
			dfs(child, graph, visited, lvl+1, values);
		}
	}
}

void solve(){
	odd = 0;
	even = 0;
	int n; cin >> n;
	vi values(n+1);
	forr(i,1,n+1)
		cin >> values[i];

	vvi graph(n+1, vi());

	forr(i,1,n){
		int u, v;
		cin >> u >> v;
		graph[u].pub(v);
		graph[v].pub(u);
	}
/*
	forr(i, 1, n+1){
		cout << i << tab;
		for(int child : graph[i]){
			cout << child << sp;
		}
		cout << endl;
	}
*/


	vector<bool> visited(n+1, false);
	dfs(1, graph, visited, 1, values);

	cout << abs(odd - even) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) solve();
}