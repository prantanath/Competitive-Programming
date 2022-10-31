//Author:  Pranta
//Date:    2022-Oct-16
//Problem: D_Divisibility_by_2_n
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
ll power(ll x)
{
    ll cnt=0;
    while(x%2==0){
        cnt++;
        x/=2;
    }
    return cnt;
}
void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    inp(arr,n);
    vector<ll>powers;
    ll tmp=0;
    fr(i,0,n){
        tmp+=power(arr[i]);
    }
    if(tmp>=n){
        pr(0);
        return;
    }
    for(ll i=2;i<=n;i+=2){
        powers.pb(power(i));
    }
    ll ans=0;
    sort(powers.rbegin(),powers.rend());
    for(auto x:powers){
        tmp+=x;
        ans++;
        if(tmp>=n){
            pr(ans);
            return;
        }
    }
    pr(-1);


}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}