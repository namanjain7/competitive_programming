#include<bits/stdc++.h>
#define int long long int
using namespace std;

int getMaxLength(vector<int>& D, int n){
    n = D.size();
    int i = 0, j = 0, ans = 0;
    while(i < n){
        j = i;
        while(j < n && D[j] == D[i]) j++;
        ans = max(ans, j-i+1);
        if(j < n) ans = max(ans, j-i+2);

        if(j+1 < n && D[j] + D[j+1] == 2 * D[i]){
            int jj = j+2;
            while(jj < n && D[jj] == D[i]) jj++;
            ans = max(ans, jj-i+1);
        }
        i = j;
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    vector<int> D;
    for(int i = 1; i < n;i++) D.push_back(arr[i] - arr[i-1]);
    int ans = getMaxLength(D, n);

    reverse(D.begin(), D.end());
    ans = max(ans, getMaxLength(D, n));
    cout << ans;
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}