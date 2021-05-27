#include<iostream>
using namespace std;

void solve(){
	int n; cin >> n;
	int arr[n] = {0};
	int m; cin >> m;

	//logic
	while(m--){
		int a, b;
		cin >> a >> b;
		if(a >= 0 && a < n) arr[a] += 100;
		if(b >= 0 && b < n) arr[b+1] -= 100;
	}
	int max = arr[0];
	for(int i = 1; i < n; i++){
		arr[i] += arr[i-1];
		if(max < arr[i]) max = arr[i];
	}
	cout << max << endl;
		
	
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}