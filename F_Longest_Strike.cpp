//Author:  Pranta
//Date:    2022-Sep-27
//Problem: F_Longest_Strike
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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    inp(arr,n);
    ll cnt=0,chk=1,l,r,a=0;
    sort(arr,arr+n);
    vector<pair<ll,ll>>vp;
    ll j=0;
    map<ll,ll>ct;
    fr(i,0,n) ct[arr[i]]++;
    fr(i,0,n){
        if(ct[arr[i]]>=k) vp.pb({arr[i],ct[arr[i]]}),ct[arr[i]]=0;
    }
    l=-1,r=1,a=0;
    SORT(vp);
    if(vp.empty()){
        pr(-1);
        return;
    }
    // for(auto x:vp){
    //     cout<<x.first<<' '<<x.second<<endl;
    // }
    ll l2=vp[0].first,r2=vp[0].first;
    l=r=l2;
    // pr(l2);
    fr(i,1,vp.size()){
        // cout<<vp[i-1].first<<endl;;
        if(vp[i-1].first==vp[i].first-1){
            chk++;
            // cout<<vp[i].first<<endl;
            if(chk>a){
                r=vp[i].first;
                l=l2;
                a=chk;
            }

        }
        else{
            chk=1;
            r2=l2=vp[i].first;
            
        }
    }
     cout<<l<<" "<<r<<endl;

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}