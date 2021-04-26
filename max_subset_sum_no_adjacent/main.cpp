#include <vector>
using namespace std;

int maxSubsetSumNoAdjacent(vector<int> array) {
  // Write your code here.
	if(array.size() == 0) return 0;
	if(array.size() == 1) return array[0];
	int first = array[0], second = max(first, array[1]);
	int current;
	for(int i = 2; i < array.size(); i++){
		current = max(first + array[i], second);
		first = second;
		second = current;
	}
  return max(first, second);
}

