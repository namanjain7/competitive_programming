#include<bits/stdc++.h>
using namespace std;

void solve_2(){
	int n, k; cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}

void solve(){
	int n, k; cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];

	//logic
	//prefix calculation
	int prefix[n];
	prefix[0] = arr[0];
	for(int i = 1; i < n; i++) prefix[i] = prefix[i-1] + arr[i];

	//for(int i = 0; i < n; i++) cout << prefix[i] << " ";
	//cout << endl;

	//nums calculation
	int size = n;

	for(int i = n-1; i >= 0; i--){
		bool flag = false;
		for(int j = i; j < n; j++){
			int minus = j - i - 1;
			if(minus < 0) minus = 0;
			else minus = prefix[minus];

			if(prefix[j] - minus > k){
				flag = true;
			}
			else{
				//cout << "***" << i << "\t" << j << " prefix " <<prefix[i] << " minus " << minus << endl;
			}
		}
		if(flag == false){
			cout << i+1 << endl;
			return;
		}
	}
	cout << -1 << endl;
	return;
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}