//Author:  Pranta
//Date:    2022-Oct-13
//Problem: E_Scuza
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
    //1 3 4 9
    ll n,q;
    cin>>n>>q;
    ll arr[n],a[q];
    inp(arr,n);
    inp(a,q);
    map<ll,ll>mp;
    ll maxa[n];
    maxa[0]=arr[0];
    fr(i,1,n){
        maxa[i]=max(maxa[i-1],arr[i]);
    }
    //1 2 2 5
    fr(i,1,n){
        arr[i]+=arr[i-1];
    }
    fr(i,0,q){
        ll idx = upper_bound(maxa,maxa+n,a[i])-maxa;
        // pr(idx);
        if(idx-1<0) cout<<0<<" ";
        else cout<<(arr[idx-1])<<" ";

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