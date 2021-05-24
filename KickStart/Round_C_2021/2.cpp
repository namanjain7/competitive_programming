#include<bits/stdc++.h>
#define int long long int
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void solve_2(){
    int g;
    cin >> g;
    bool flag = false;
    int counter;
    for(int i = 1; i <= g; i++){

        int i_sum = 0;
        counter = 0;
        for(int j = i; j <= g && i_sum <= g; j++, counter++){
            i_sum += j;
            //cout << j << " This was J" << endl;
            //cout << i_sum << " this was i_sum" << endl;
            if(i_sum == g){
                flag = true;
                break;
            }
        }
        if(flag == true) break;
    }
    int result = 0;
    counter -= 1;
    while(counter > 0){
        result++;
        counter /= 2;
    }
    cout << result;
}

void solve(){
    int g;
    cin >> g;
    int result = 0;
    for(int i = 1; i <= g; i++){
        int temp = 0;
        for(int j = i; j <= g+1; j++){
            if(temp == g){
                result++;
                break;
            }
            if(temp > g){
                break;
            }
            temp += j;
        }

    }
    cout << result;
}

int32_t main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

//ios_base::sync_with_stdio(false);
//cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 1;i <= t; i++){
        cout << "Case #" << i << ": ";
        solve_2();
        cout << "\n";
    }

    return 0;
}