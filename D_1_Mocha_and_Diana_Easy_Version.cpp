//Author:  Pranta
//Date:    2022-Oct-28
//Problem: D_1_Mocha_and_Diana_Easy_Version
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

struct DSU{
    ll n,cnt=0;
    vector<ll>parent,len,ct;
    
    DSU(ll N){
        n = N;
        ct.assign(n+1,0);
        parent.assign(n+1,-1);
        len.assign(n+1,1);
        fr(i,0,n+1) parent[i]=i;
    }
    ll Find(ll x){
        if(parent[x] == x) return x;
        return parent[x] = Find(parent[x]);
    }
    void Union(ll a,ll b){
        a = Find(a);
        b = Find(b);
        if(a!=b){
            if(len[a]<len[b]){
                swap(a,b);
            }
            parent[b] = a;
            len[a]+=len[b];
        }
    }
    /*ll Check(){
        fr(i,1,n){
            ct[parent[i]]++;
        }
        fr(i,1,n) if(ct[i]>0) cnt++;
        return cnt;
    }*/
};


void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    DSU g1(n+1),g2(n+1);
    vector<pair<ll,ll>>ans;
    while(x--){
        ll u,v;
        cin>>u>>v;
        g1.Union(u,v);
        
    }
    while(y--){
        ll u,v;
        cin>>u>>v;
        g2.Union(u,v);
    }
    fr(i,1,n+1){
        fr(j,i+1,n+1){
            if(g1.Find(i) != g1.Find(j) 
            and g2.Find(i) != g2.Find(j)){
                g1.Union(i,j);
                g2.Union(i,j);
                ans.pb({i,j});
            }
        }
    }
    // pr(g1.Check());
    // pr(g2.Check());
    pr(ans.size());
    for(auto x:ans) cout<<x.first<<" "<<x.second<<endl;

}
int main()
{
    fast;
    int t;
    // cin>>t;
    // while(t--)
    solve();
}