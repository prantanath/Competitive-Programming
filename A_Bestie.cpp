//Author:  Pranta
//Date:    2022-Oct-24
//Problem: A_Bestie
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
    cin>>n;
    ll arr[n];
    inp(arr,n);
    ll ans=0,a=0;
    rfr(i,0,n){
        a = __gcd(arr[i],a);
    }
    if(a==1){
        pr(0);
        return;
    }
    if(__gcd(a,n)==1){
        pr(1);
    }
    else if(__gcd(a,n-1)==1){
        pr(2);
    }
    else pr(3);
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}