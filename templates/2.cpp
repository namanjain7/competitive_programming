using namespace std;
#define vvi vector<vector<int>>
#define pb push_back
#define mp make_pair
#define int long long int
#define usi unsigned
#define all(v) v.begin(),v.end()
#define endl '\n'
#define fi first
#define se second
#define forr(i, l, r) for (int i = l; i < r; i++)
#define sz(a) (int)a.size()
typedef vector<int> vi;     

#define YEYE ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int ans = 0;
int even = 0;
int odd = 0;
void dfs(int s,vvi &v, vi &visit,int lvl,int a[]){
    visit[s] = 1;
    if(lvl%2){
        odd += a[s];
    }else{
        even += a[s];
    }
    for(auto i: v[s]){
        if(!visit[i]){
            dfs(i,v,visit,lvl+1,a);
        }
    }
}

void solve(){
    int n; cin>>n;
    int a[n+1]; odd =0;even = 0;
    forr(i,1,n+1) cin>>a[i];
    vvi v(n+1,vi());
    vi visit(n+1,0);
    forr(i,0,n-1){
        int x,y; cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1,v,visit,0,a);
    cout<<abs(even-odd)<<endl;
}

signed main(){
    YEYE;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
   
    int t = 1; cin>>t;
    //int i = 1;
    while(t--){
       solve();
    }
}