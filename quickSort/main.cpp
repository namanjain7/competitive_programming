#include <vector>
using namespace std;

void quickSortHelper(vector<int> &array, int start, int end);

vector<int> quickSort(vector<int> array) {
  // Write your code here.
	quickSortHelper(array, 0, array.size() - 1);
  return array;
}

void quickSortHelper(vector<int> &array, int start, int end){
	if(start >= end)
		return;
	int pivot = start;
	int left = start + 1;
	int right = end;
	while(right >= left){
		if(array.at(left) > array.at(pivot) && array.at(pivot) > array.at(right)){
			swap(array[left], array[right]);
		}
		if(array.at(left) <= array.at(pivot)){
			left += 1;
		}
		if(array.at(pivot) <= array.at(right)){
			right -= 1;
		}
	}
		swap(array[pivot], array[right]);
		bool isleftsmaller = right - 1 - start < end - right + 1;
		if(isleftsmaller){
			quickSortHelper(array, start, right-1);
			quickSortHelper(array, right + 1, end);
		}
		else{
			quickSortHelper(array, right+1, end);
			quickSortHelper(array, start, right-1);
		}
}
