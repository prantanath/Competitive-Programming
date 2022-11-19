//Author:  Pranta
//Date:    2022-Nov-18
//Problem: E_The_Humanoid
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
    ll n,x,p;
    cin>>n>>x;
    ll arr[n];
    inp(arr,n);
    ll tr=0,ans=0,ans1=0,ans2=0;
    sort(arr,arr+n);
    p=x;
    fr(i,0,n){
        if(arr[i]<x){
            x+=(arr[i]/2),ans++;
        }
        else{
            if(tr==0) x*=2,tr++;
            if(arr[i]<x){
                x+=(arr[i]/2),ans++;
            }
            else{
                if(tr==1) x*=2,tr++;
                if(arr[i]<x){
                    x+=(arr[i]/2),ans++;
                }
                else{
                    if(tr==2) x*=3,tr++;
                    if(arr[i]<x){
                        x+=(arr[i]/2),ans++;
                    }
                    else{
                        goto ok;
                    }
                }
            }
        }
    }
    ok:tr=0,x=p;
    fr(i,0,n){
        if(arr[i]<x){
            x+=(arr[i]/2),ans1++;
        }
        else{
            if(tr==0) x*=3,tr++;
            if(arr[i]<x){
                x+=(arr[i]/2),ans1++;
            }
            else{
                if(tr==1) x*=2,tr++;
                if(arr[i]<x){
                    x+=(arr[i]/2),ans1++;
                }
                else{
                    if(tr==2) x*=2,tr++;
                    if(arr[i]<x){
                        x+=(arr[i]/2),ans1++;
                    }
                    else{
                        goto kk;
                    }
                }
            }
        }
    }
    kk:tr=0,x=p;
    fr(i,0,n){
        if(arr[i]<x){
            x+=(arr[i]/2),ans2++;
        }
        else{
            if(tr==0) x*=2,tr++;
            if(arr[i]<x){
                x+=(arr[i]/2),ans2++;
            }
            else{
                if(tr==1) x*=3,tr++;
                if(arr[i]<x){
                    x+=(arr[i]/2),ans2++;
                }
                else{
                    if(tr==2) x*=2,tr++;
                    if(arr[i]<x){
                        x+=(arr[i]/2),ans2++;
                    }
                    else{
                        ll a = max({ans,ans1,ans2});
                        pr(a);
                        return;
                    }
                }
            }
        }
    }
    ll a = max({ans,ans1,ans2});
    pr(a);
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}