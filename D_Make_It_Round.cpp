//Author:  Pranta
//Date:    2022-Nov-18
//Problem: D_Make_It_Round
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
    ll n,m;
    cin>>n>>m;
    ll fv =0,tw=0,tmp=n,k=1;
    while(tmp%2==0){
        tw++;
        tmp/=2;
    }
    while(tmp%5==0){
        fv++;
        tmp/=5;
    }tmp=m;
    ll mn = min(fv,tw);tw-=mn;fv-=mn;
    while(tw>0){
        if(k*5>m) break;
        k*=5;tw--;
    }
    while(fv>0){
        if(k*2>m) break;
        k*=2;fv--;
    }
    while(k*10<=m) {
        k*=10;
    }
    k=(m/k)*k;
    pr(k*n);

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}