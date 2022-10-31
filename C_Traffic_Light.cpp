//Author:  Pranta
//Date:    2022-Oct-16
//Problem: C_Traffic_Light
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define inp(a,n) ({ fr(i,0,n)cin>>a[i]; })
#define fr(i,a,n) for(ll i=a;i<n;++i)
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
void solve()
{
    ll n;
    char a;
    cin>>n>>a;
    string s,t ;
    cin>>s;
    ll ans=0,fo=INF;
    vector<ll>green,qu;

    fr(i,0,n){
        if(s[i]=='g') green.pb(i);
        if(s[i]=='g') fo=min(fo,i);
    }
    green.pb(fo+n);
    fr(i,0,n){
        if(s[i]==a) {
            ll idx = *lower_bound(all(green),i);
            ans=max(ans,(ll)(idx-i));
        }
    }
    pr(ans);
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}