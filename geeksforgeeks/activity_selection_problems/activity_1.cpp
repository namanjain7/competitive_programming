#include<iostream>
#include<algorithm>
using namespace std;

struct activity{
	int start, finish;
};

bool comparator(activity a, activity b){
	return a.finish < b.finish;
}

void solve(){
	int n; cin >> n;
	if(n == 0) return;
	activity arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i].start;
		cin >> arr[i].finish;
	}
		
	//logic
	sort(arr, arr+n, comparator);
	cout << arr[0].start << " " << arr[0].finish << endl;
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[i].finish <= arr[j].start){
			cout << arr[j].start << " " << arr[j].finish << endl;
			i = j;
		}
	}
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t; cin >> t;

	while(t--) solve();

}