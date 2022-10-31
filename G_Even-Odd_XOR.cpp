//Author:  Pranta
//Date:    2022-Sep-26
//Problem: G_Even-Odd_XOR
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
    vector<ll>odd,even;
    if(n%2==0){
        fr(i,1,((n/2)+1)){
            odd.pb(i);
            even.pb(i);
        }
        ll tmp = n/2;
        ll add1 = (1<<29), add2=(1<<30);
        if(tmp%2){
            fr(i,0,tmp-1){
                even[i]+=add1;
            }
            fr(i,1,tmp){
                even[i]+=add2;
            }
        }
        else{
            fr(i,0,tmp){
                even[i]+=add2;
            }
        }
    }
    else{
        odd.pb(0);
        fr(i,1,((n/2)+1)){
            odd.pb(i);
            even.pb(i);
        }
        ll tmp=(n+1)/2;
        ll add1 = (1ll<<29), add2=(1ll<<30);
        
            if(tmp%2){
                fr(i,0,tmp-1){
                    odd[i]|=add1;
                }
                fr(i,1,tmp){
                    odd[i]|=add2;
                }
            }
            else{
                fr(i,0,tmp){
                    odd[i]|=add2;
                }
            }
      
    }
    ll poi1=0,poi2=0;
    // for(auto x:odd) cout<<x<<" ";
    x:fr(i,0,n){
        if(n==3 and i<3) {
            cout<<2<<" "<<1<<" "<<3<<endl;
            break;
        }
        if(i%2==0) cout<<odd[poi1]<<" ",poi1++;
        else cout<<even[poi2]<<" ",poi2++;
        if(n-1==i) cout<<endl;
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