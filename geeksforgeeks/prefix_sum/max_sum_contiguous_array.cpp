#include<iostream>
#include<climits>
using namespace std;

void solve(){
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];

	//logic
	int msf = INT_MIN, meh = 0, start = 0, end = 0, s = 0;
	for(int i = 0; i < n; i++){
		meh += arr[i];
		if(msf < meh){
			msf = meh;
			start = s;
			end = i;
		}
		if(meh < 0){
			meh = 0;
			s = i + 1;
		}
	}

	cout << "Starting index is: " << start << " Ending index is: " << end << endl;


}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t; cin >> t;
	while(t--) solve();
}