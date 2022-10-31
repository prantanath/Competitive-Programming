//Author:  Pranta
//Date:    2022-Oct-13
//Problem: D_Coprime
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
    ll arr[n];
    inp(arr,n);
    ll ct[1005]={0},ct2[1005]={0};
    fr(i,0,n){
        ct[arr[i]]=i+1;
    }
    ll ans =-1;
    fr(i,1,1001){
        fr(j,1,1001){
            if(ct[i] and ct[j] and __gcd(i,j)==1){
                ans=max(ans,ct[i]+ct[j]);
            }
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