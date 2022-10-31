//Author:  Pranta
//Date:    2022-Oct-16
//Problem: B_Even-Odd_Increments
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
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    inp(arr,n);
    ll odd=0,even=0,oc=0,ev=0;
    fr(i,0,n){
        if(arr[i]%2) odd+=arr[i],oc++;
        else even+=arr[i],ev++;
    }
    fr(i,0,q){
        ll x,y;
        cin>>x>>y;
        if(x==0){
            ll p=y;
            y*=ev;
            even+=y;
            pr(even+odd);
            if(p%2) odd+=even,even=0,ev=0,oc=n;
            
        }
        else{
            ll p=y;
            y*=oc;
            odd+=y;
            pr(odd+even);
            if(p%2) even+=odd,odd=0,ev=n,oc=0;
        }
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