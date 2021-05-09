#include <iostream>

void input(int* arr, int n){
	std::cout << "Enter elements\n";
	for(int i = 0; i < n; i++){
		std::cin >> *arr;
		arr++;
		}
	return;
	}

void swap(int* arr, int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
	}

void quickSortHelper(int* arr, int start, int end){
	if(start >= end){
		return;
	}
	int pivot = start;
	int left = start + 1;
	int right = end;
	while(left <= right){
		if(arr[left] > arr[pivot] && arr[right] < arr[pivot])
			swap(arr, left, right);
		if(arr[pivot] >= arr[left])
			left += 1;
		if(arr[pivot] <= arr[right])
			right -= 1;
		}
	swap(arr, pivot, right);
	bool isleftArraySmall = right - 1 - start < end - left;
	if(isleftArraySmall){
		quickSortHelper(arr, start, right-1);
		quickSortHelper(arr, left, end);
		}
	else{
		quickSortHelper(arr, left, end);
		quickSortHelper(arr, start, right - 1);
		}
	}

void quickSort(int* arr, int n){
	quickSortHelper(arr, 0, n-1);
	
	}
	
void printArray(int* arr, int n){
	for(int i = 0; i < n; i++){
		std::cout << arr[i] << "\n";
		}
	}

int main(){
	//std::ios_base::sync_with_stdio(false);
	//std::cin.tie(nullptr);
	int n;
	std::cout << "Enter number of elements to be sorted \n";
	std::cin >> n;
	int arr[n];
	input(arr, n);
	quickSort(arr, n);
	printArray(arr, n);
	
}
