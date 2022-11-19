//Author:  Pranta
//Date:    2022-Nov-18
//Problem: B_Lost_Permutation
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
    ll m,ss;
    cin>>m>>ss;
    ll arr[m];
    inp(arr,m);
    ll mx=*max_element(arr,arr+m);
    ll s=0;
    fr(i,0,m) s+=arr[i];
    ll mxsum = mx*(mx+1);
    mxsum/=2;
    mxsum-=s;
    ss-=mxsum;
    ll a=0;
    if(ss==0){
        pr("YES");
        return;
    }
    if(ss<0){
        pr("NO");
        return;
    }
    for(ll i=mx+1;;i++){
        ss-=i;
        if(ss==0){
            pr("YES");
            return;
        }
        if(ss<0){
            pr("NO");
            return;
        }
        
    }
    pr("NO");

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}