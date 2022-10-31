//Author:  Pranta
//Date:    2022-Oct-25
//Problem: B_Kevin_and_Permutation
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
    ll div=n/2,p=0;
    if(n%2) div++;
    if(n%2){ 
    while(div>1){
        cout<<div<<" "<<n-p<<" ";
        div--;p++;
    }
    cout<<1;
    }
    else{
        while(div>=1){
        cout<<div<<" "<<n-p<<" ";
        div--;p++;
    }
    }
    pr("");
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}