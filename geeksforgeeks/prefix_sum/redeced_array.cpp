#include<iostream>
#include<unordered_map>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;

void printArr(int* arr, int n){
	for(int i = 0; i < n; i++) cout << *(arr + i) << " ";
	cout << endl;
}

void solve(){
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	printArr(arr, n);
	//logic;
	int temp[n];
	//temp copy
	for(int i = 0; i < n; i++) temp[i] = arr[i];

	//temp sorting
	sort(temp, temp + n);
	
	//mapping
	unordered_map<int, int> ump;
	int in = 0;
	for(int i = 0; i < n; i++){
		ump[temp[i]] = in++;
	}

	for(int i = 0; i < n ; i++){
		arr[i] = ump[arr[i]];
	}
	printArr(arr, n);
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t; cin >> t;
	while(t--) solve();
}