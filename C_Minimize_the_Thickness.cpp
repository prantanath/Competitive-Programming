//Author:  Pranta
//Date:    2022-Oct-13
//Problem: C_Minimize_the_Thickness
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
    ll arr[n+5];
    inp(arr,n);
    ll pre[n+5];
    pre[0]=arr[0];
    fr(i,1,n){
        pre[i]=pre[i-1]+arr[i];
    }
    ll ans=INF;
    fr(i,0,n){
        ll s= pre[i];
        s*=2;
        ll lenc=i,mainIdx=i+1;

        while(binary_search(pre,pre+n,s)){
            ll ind = lower_bound(pre,pre+n,s)-pre;
            // pr(ind);
            s+=pre[i];
            mainIdx=max(mainIdx,ind-lenc);
            lenc=ind;
        }
        // pr(mainIdx);
        if(lenc==n-1) ans=min(ans,mainIdx);
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