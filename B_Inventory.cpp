//Author:  Pranta
//Date:    2022-Oct-29
//Problem: B_Inventory
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
    ll arr[n+1];
    ll ct[100005]={0};
    set<ll>s;
    fr(i,1,n+1) s.insert(i);
    fr(i,0,n){
        cin>>arr[i];
        s.erase(arr[i]);
    }
    fr(i,0,n){
        ct[arr[i]]++;
        if(ct[arr[i]]>1 || arr[i]>n) arr[i]=*s.begin(),s.erase(*s.begin());
    }
    fr(i,0,n) cout<<arr[i]<<" ";
}
int main()
{
    fast;
    int t;
    // cin>>t;
    // while(t--)
    solve();
}