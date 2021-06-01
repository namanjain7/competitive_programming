#include<iostream>
using namespace std;

#define R 3
#define C 3

void print2DArray(int arr[R][C]){
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

void TwodPrefix(int arr[R][C]){
	cout << "Original Array is: " << endl;
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	int prefix[R][C];
	prefix[0][0] = arr[0][0];
	for(int i = 1; i < R; i++){
		prefix[0][i] =  prefix[0][i-1] + arr[0][i];
	}

	for(int i = 1; i < C; i++){
		prefix[i][0] = prefix[i-1][0] + arr[i][0];
	}


	for(int i = 1; i < R; i++){
		for(int j = 1; j < C; j++){
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + arr[i][j];
		}
	}



	cout << "2d array is: " << endl;
	print2DArray(prefix);
}

int main(){
	int arr[R][C] = {
		{10,20,30},
		{5,10,20},
		{2,4,6}
	};

	TwodPrefix(arr);
}