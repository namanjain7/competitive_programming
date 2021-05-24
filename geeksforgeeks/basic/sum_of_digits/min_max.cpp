#include<bits/stdc++.h>
#define ll long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

struct _pair{
    int min;
    int max;
};

struct _pair linear(int arr[], int n){

    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    struct _pair a;
    a.min = min;
    a.max = max;
    return a;
}

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    struct _pair a;
     a = linear(arr, n);
     cout << "Min is: " << a.min << " and Max is: " << a.max << endl;
}

struct _pair recursive_(int arr[], int n, int l, int r){
    struct _pair minmax, mml, mmr;
    if(l == r){
        minmax.min = arr[l];
        minmax.max = arr[r];
        return minmax;
    }
    else if(r - l == 1){
        minmax.min = (arr[l] < arr[r]) ? arr[l] : arr[r];
        minmax.max = (arr[l] > arr[r]) ? arr[l] : arr[r];
        return minmax;
    }
    else{
        int mid = l + (r - l)/2;
        mml = recursive_(arr, n, l, mid);
        mmr = recursive_(arr, n, mid+1, r);
        minmax.min = (mml.min < mmr.min) ? mml.min : mmr.min;
        minmax.max = (mml.max > mmr.max) ? mml.max : mmr.max;
        return minmax;
    }
}

void solve_2(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    struct _pair a;
    a = recursive_(arr, n, 0, n-1);
    cout << "Min is: " << a.min << " and Max is: " << a.max << endl;
}

void solve_3(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    struct _pair a;
    int counter = 0;

    if(n % 2 == 0){
        a.min = (arr[0] > arr[1]) ? arr[1] : arr[0];
        a.max = (arr[0] > arr[1]) ? arr[0] : arr[1];
        counter = 2;
    }
    else{
        a.min = arr[0];
        a.max = arr[0];
        counter = 1;
    }

    while(counter < n-1){
        if(arr[counter] > arr[counter+1]){
            a.min = (a.min > arr[counter+1]) ? arr[counter+1] : a.min;
            a.max = (a.max > arr[counter]) ? a.max : arr[counter];
        }
        else{
            a.min = (a.min > arr[counter]) ? arr[counter] : a.min;
            a.max = (a.max > arr[counter+1]) ? a.max : arr[counter+1];
        }
        counter += 2;
    }
    cout << "Min is: " << a.min << " and Max is: " << a.max << endl;
}

int32_t main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for(int i = 0;i < t; i++){
        cout << "Case #" << i << ": ";
        solve_3();
        cout << "\n";
    }

    return 0;
}