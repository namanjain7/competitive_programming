#include<iostream>
using namespace std;

void solve(){
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	//logic
	int prefx[n];
	prefx[0] = arr[0];
	for(int i = 1; i < n; i++) prefx[i] = prefx[i-1] + arr[i];
	
		
	
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}