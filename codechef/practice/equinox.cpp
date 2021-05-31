#include<iostream>
#include<vector>
using namespace std;

void solve(){
	int n, a, b;
	cin >> n >> a >> b;
	vector<string> arr;
	arr.reserve(n);

	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		arr.push_back(temp);
	}

	for(int i = 0; i < n; i++){
		char temp = arr[i][0];
		cout << temp << endl;
	}

}

int main(){
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) solve();
    cout << "\n";

    return 0;
}


