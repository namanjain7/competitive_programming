#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool less_than(int a, int b){
    return a < b;
}

void print_vector(vector<int>& v){
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int count_digits(int n){
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
        cout << n << "****";
    }
    return count;
    cout << count << endl;
}

int main(){
    vector<int> v;
    v.reserve(100);
    v = {1, 5, 3, 2, 6, 7, 1};

    print_vector(v);
    cout << endl;
    sort(v.begin(), v.end(), less_than);

    print_vector(v);

    v.push_back(-400);

    print_vector(v);

    v.pop_back();
    cout << "capacity of the vector is: " << v.capacity() << endl;
    cout << "Maximum size of the vector is: " << v.max_size() << endl;
    v.resize(1000000, 7);
    print_vector(v);
}