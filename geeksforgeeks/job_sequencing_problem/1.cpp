#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct job{
	int id;
	int deadline;
	int profit;
};

bool comparator(job a, job b){
	return a.profit > b.profit;
}

void print_vector(vector<job> v){
	for(job x : v){
		cout << x.profit << endl;
	}
}

void solve(job arr[], int n){
	
	sort(arr, arr + n, comparator);
	vector<job> result;
	bool slots[n] = {false};

	for(int i = 0; i < n; i++){
		job curr = arr[i];
		//cout << curr.id << endl;

		for(int j = min(curr.deadline, n) - 1; j >= 0; j--){
			if(slots[j] == false){
				cout << curr.profit << " " << j << endl;
				slots[j] = true;
				result.push_back(curr);
				break;
			}
		}
	}

}

int main(){
	int n = 5;
	job arr[5] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};;

    solve(arr, n);
}