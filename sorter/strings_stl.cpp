#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

bool desc(string a, string b){
    return a > b;
}

bool desc_length(string a, string b){
    return a.length() > b.length();
}

int main(){
    string s1;
    //getline(cin, s1);
    cout << s1 << endl;

    string arr[] = {"Apple", "Bananannaaananana", "Pineapple", "Grapes", "Guava", "Mango", "stra"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, desc_length);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " - ";
    }
}