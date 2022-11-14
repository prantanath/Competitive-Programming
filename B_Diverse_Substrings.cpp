//Author:  Pranta
//Date:    2022-Nov-12
//Problem: B_Diverse_Substrings
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    ll ans=0,mx=0,ok=0;
    fr(i,0,n){
        ok=0;mx=0;
        map<char,ll>mp;
        ll p=min(i*1ll+101,n);
        fr(j,i,p){
            mp[s[j]]++;
            mx=max(mx,mp[s[j]]);
            if(mx<=mp.size()) ans++;
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