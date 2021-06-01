#include<iostream>
#include<vector>
using namespace std;

vector<int> difference_array(vector<int> &arr){

	int size = arr.size();
	vector<int> diff(size+1);
	diff[size] = 0;
	for(int i = 0; i < size; i++){
		if(i == 0) diff[0] = arr[0];
		else diff[i] = arr[i] - arr[i-1];
	}
	return diff;
}

void print_vector(vector<int> &arr){
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void update(vector<int>& diff, int l, int r, int value){
	diff[l] += value;
	diff[r+1] -= value;
}

void wrap_up(vector<int>& diff, vector<int>& arr){
	arr[0] = diff[0];
	int n = arr.size();
	for(int i = 1; i < n; i++){
		cout << arr[i-1] << " " << diff[i] << endl;
		arr[i] = arr[i-1] + diff[i];
	}
}

int main(){
	vector<int> arr = {10, 5, 20, 40};
	vector<int> diff = difference_array(arr);
	//print_vector(arr);
	//print_vector(diff);

	update(diff, 0, 1, 10);
	print_vector(diff);
	print_vector(arr);
	wrap_up(diff, arr);
	print_vector(arr);

}