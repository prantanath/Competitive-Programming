//Author:  Pranta
//Date:    2022-Sep-22
//Problem: B_Rule_of_League
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
    ll n,x,y;
    cin>>n>>x>>y;
    if(x!=0 and y!=0 || x==0 and y==0 || (n-1)%max(x,y)!=0) pr(-1);
    else{
        ll ans = max(x,y),i=1;
        if(ans==1){
            fr(k,2,n+1) cout<<k<<" ";
        }
        else{
        while(i<=n){
            fr(j,0,ans) cout<<i<<" ";
            if(i==1) i+=(ans+1);
            else i+=ans;
        }
        }
        pr("");
    }   
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}