//Author:  Pranta
//Date:    2022-Sep-23
//Problem: No_Big_Deal
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
    ll k;
    cin>>k;
    ll a[k];
    inp(a,k);
    ll q;
    cin>>q;
    pair<ll,ll>p[q];
    ll mx=0;
    // cout<<q<<endl;
    fr(i,0,q){
        cin>>p[i].first>>p[i].second;

        mx= max(mx,max(p[i].first,p[i].second));
    }
    ll b[mx+1];
    ll x=a[0];
    fr(i,1,k) x^=a[i],b[i]=a[i];
    b[0]=a[0];
    b[k]=x;
    // pr(x);
    ll inc=2;
    fr(i,k+1,mx){
        b[i]=0;
    }
    ll c[mx+2];
    fr(i,0,mx) cout<<b[i]<<" ";pr("");
    fr(i,0,mx) c[i]=b[i];    

    fr(i,1,k+1){
        b[i]^=b[i-1];
    }
    fr(i,k+1,mx){
        b[i]= b[i-1]^b[i-k]^b[i-1];
    }
    fr(i,0,mx) cout<<b[i]<<" ";
    pr("");
    fr(i,0,q){
        // cout<<p[i].second<<" "<<p[i].first<<endl;
        // cout<<b[i]<<" ";
        if(p[i].first==1){
            pr(b[p[i].second-1]);
        }
        else{
        ll ans =b[p[i].second-1] ^ b[p[i].first-2];
        pr(ans);
        }
    }

}
int main()
{
    fast;
    int t=1;
    // cin>>t;
    while(t--)
    solve();
}