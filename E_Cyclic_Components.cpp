//Author:  Pranta
//Date:    2022-Oct-29
//Problem: E_Cyclic_Components
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define inp(a,n) ({ fr(i,0,n)cin>>a[i]; })
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=a;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<endl 
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
bool vis[200005];
vector<int>adj[200005];
int deg[200005];
vector<ll>components;
void dfs(int a)
{
    // if(adj[a].empty()) return;
    vis[a]=true;
    components.pb(a);
    for(auto x:adj[a]){
        if(!vis[x]){
            dfs(x);
        }
    }
 
}
void solve()
{
    //cin>>n;
    ll n,m;
    cin>>n>>m;
    fr(i,0,m){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
        deg[x]++;
        deg[y]++;
    }
    ll ans=0;
    fr(i,1,n+1){
        if(!vis[i]){
            components.clear();
            dfs(i);
            bool f = true;
            for(auto a:components){
                if(deg[a]!=2){
                    f=false;
                    break;
                }
            }
            if(f) ans++;
        }
    }
    pr(ans);
 
}
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    solve();
}
