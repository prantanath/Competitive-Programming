//Author:  Pranta
//Date:    2022-Nov-18
//Problem: C_Thermostat
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
    ll l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b){
        pr(0);
        return;
    }
    if(abs(a-l)<x and abs(r-a)<x){
        pr(-1);
        return;
    }
    if(abs(b-l)<x and abs(r-b)<x){
        pr(-1);
        return;
    }
    if(abs(a-b)>=x){
        pr(1);
        return;
    }
    if(b<a) swap(a,b);
    if(abs(r-b)>=x){
        pr("2");
        return;
    }
    if(abs(a-l)>=x and abs(b-l)>=x){
        pr(2);
        return;
    }
    if(abs(b-l)>=x and abs(r-l)>=x and abs(r-a)>=x){
        pr(3);
        return;
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