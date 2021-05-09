#include<bits/stdc++.h>
using namespace std;

bool comparator(int a , int b){
    return a < b;
}

int main(){
    /*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/

    int a[] = {5, 1, 6, 7, 3, 0, 9, 7};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> arr (a, a+n);
    sort(arr.begin(), arr.end(), comparator);
    vector<int>::iterator low = lower_bound(arr.begin(), arr.end(), 7);
    vector<int>::iterator upper = upper_bound(arr.begin(), arr.end(), 7);
    for(auto i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "lower bound is: " << low-arr.begin() << endl << "And upper bound is: " << upper - arr.begin() << endl;

    cout << "Performing Binary Search!!" << endl;

    if(binary_search(arr.begin(), arr.end(), 610))
        cout << "Element found in the array!!" << endl;
    else
        cout << "Element not found!!" << endl;

    return 0;
}