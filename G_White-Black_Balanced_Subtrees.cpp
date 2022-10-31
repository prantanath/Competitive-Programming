//Author:  Pranta
//Date:    2022-Sep-28
//Problem: G_White-Black_Balanced_Subtrees
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
vector<ll> adj[4005];
bool vis[4005];
ll ans=0;
ll dfs (ll x,string s){
    vis[x]=1;
    ll t=0;
    for(auto v:adj[x]){
        // cout<<v<<endl;
        if(!vis[v]){
            t+=dfs(v,s);
        }
    }
    t+=s[x]=='W';
    t-=s[x]=='B';
    if(!t)ans++;
    return t;

}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n-1);
    fr(i,0,n+1) vis[i]=0,adj[i].clear();
    fr(i,2,n+1){
        ll u;
        cin>>u;
        adj[u].pb(i);
        adj[i].pb(u);
    }
    string s;
    cin>>s;
    string t=" ";
    s=t+s;
    dfs(1,s);
    pr(ans);
    ans=0;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}