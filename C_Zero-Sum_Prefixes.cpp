//Author:  Pranta
//Date:    2022-Nov-12
//Problem: C_Zero-Sum_Prefixes
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
    ll pref[n];
    pref[0]=arr[0];
    ll ans=0,itr=1,a=0;
    fr(i,1,n) pref[i]=pref[i-1]+arr[i];
    map<ll,ll>mp;
    bool bal = true;
    //22322
    //first approch
    /*fr(i,0,n){
        if(arr[i]==0){
            mp[pref[i]]++;
            bal=false;
            ll j=i+1;
            while(j<n){
                if(arr[j]==0) break;
                mp[pref[j]]++;
                itr=max(itr,mp[pref[j]]);
                j++;
            }
            // cout<<"j->"<<j<<" "<<"itr->"<<itr<<endl;
            i=j-1;
            ans+=itr;
            itr=1;
            mp.clear();
        }
        if(pref[i]==0 and bal) ans++;
    }*/
    //second approach
    rfr(i,0,n){
        mp[pref[i]]++;
        itr=max(itr,mp[pref[i]]);
        if(arr[i]==0){
            ans+=itr;
            itr=0;
            mp.clear();
        }
    }
    ans+=mp[0];
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