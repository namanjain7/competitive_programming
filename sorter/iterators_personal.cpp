#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_vector(vector<int> &v){
    for(vector<int>::iterator i = v.begin(); i < v.end(); ++i){
        cout << *i << " - " ;
    }
    cout << endl;
}

int main(){
    vector<int> v = {1, 4, 3, 67, 12, 0, 23, 4};
    sort(v.begin(), v.end());
    print_vector(v);
    auto a = v.insert(v.begin() + 3, 2, 600);
    print_vector(v);
    return 0;
}