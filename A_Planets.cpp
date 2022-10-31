//Author:  Pranta
//Date:    2022-Sep-25
//Problem: A_Planets
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
void solve()
{
    ll n,c;
    cin>>n>>c;
    ll arr[n];
    inp(arr,n);
    map<ll,ll>mp;
    fr(i,0,n) mp[arr[i]]++;
    ll ans=0;
    for(auto x:mp){
        ans+= min(x.second,c);
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