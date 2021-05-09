#include<bits/stdc++.h>
#define int long long int
using namespace std;

int mulmod(int a, int b, int m){
   int x = 0,y = a % m;
   while (b > 0) {
      if (b % 2 == 1) {
         x = (x + y) % m;
      }
      y = (y * 2) % m;
      b /= 2;
   }
   return x % m;
}

int modulo(int base, int e, int m) {
   int x = 1;
   int y = base;
   while (e > 0) {
      if (e % 2 == 1)
         x = (x * y) % m;
         y = (y * y) % m;
         e = e / 2;
   }
   return x % m;
}

bool Miller(int p, int iteration) {
   if (p < 2) {
      return false;
   }
   if (p != 2 && p % 2==0) {
      return false;
   }
   int s = p - 1;
   while (s % 2 == 0) {
      s /= 2;
   }
   for (int i = 0; i < iteration; i++) {
      int a = rand() % (p - 1) + 1, temp = s;
      int mod = modulo(a, temp, p);
      while (temp != p - 1 && mod != 1 && mod != p - 1) {
         mod = mulmod(mod, mod, p);
         temp *= 2;
      }
      if (mod != p - 1 && temp % 2 == 0) {
         return false;
      }
   }
   return true;
}

void solve_2(int n){
   vector<bool> v(n, true);
   for(int i = 2; i < n; i++){
      if(v[i] == true)
      for(int ii = 2*2; ii < n; ii++){
         v[ii] = false;
      }
   }
   int a = 0, b = 0;
   for(int i = n-1; i >= 0; i--){
      if(v[i] == true){
         if(a == 0){
            a = i;
            continue;
         }
         if(b == 0){
            b = i;
            break;
         }
      }
   }
   cout << a * b;
}

void solve(){
    int n;
    cin >> n;
    if(n < 300){
       solve_2(n);
       return;
    }
    int sn = sqrt(n) - 1;
    int counter = 0;
    vector<int> primes;
    while(counter < 2){
        if(Miller(sn, 1)){
            primes.push_back(sn);
            counter++;
        }
        sn -= 1;
    }
    swap(primes[0], primes[1]);
    sn = sqrt(n);
    int primecount = 0;
    while(primecount < 1){
        sn += 1;
        if(Miller(sn, 1)){
            primes.push_back(sn);
            primecount++;
        }
    }
    int ans = 0;
    for(int i = 1; i < 3; i++){
        if(primes[i] * primes[i-1] <= n){
            ans = primes[i] * primes[i-1];
        }
    }
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