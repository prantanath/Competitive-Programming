//Author:  Pranta
//Date:    2022-Oct-15
//Problem: C_Permutation_Operations
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
    //1 3 2 4 5 
    //1 2 3 4 5
    //2 4 3 5 6
    //2 4 5 7 8
    //2 3 1
    //3 4 2
    //4 5 2
    //5 4 3 2
    //5 6 5 4
    //5 6 8 7
    //5 6 8 11
    //2 3 6 7 8 4
    //2 3 6 7 8 9
    //1 2 6 9 10 8
    //1 2 6 9 10 14
    ll n;
    cin>>n;
    ll arr[n];
    inp(arr,n);
    vector<pair<ll,ll>>vp;
    ll ct[n]={0};
    fr(i,0,n-1){
        if(arr[i]>arr[i+1]) vp.pb({arr[i]-arr[i+1],i+1});
    }
    SORT(vp);
    vector<ll>ans(n,1),ex;
    ll mn= n-vp.size(),l=0;
    fr(i,mn,n){
        if(l>=vp.size()) break;
        ans[i]=vp[l].second+1;
        l++;
    }
    for(auto x:ans) cout<<x<<" ";
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