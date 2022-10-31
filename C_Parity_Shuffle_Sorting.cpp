//Author:  Pranta
//Date:    2022-Sep-22
//Problem: C_Parity_Shuffle_Sorting
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
    vector<ll>arr(n),v;
    inp(arr,n);
    pair<ll,ll>p[n];
    ll a=0;
    if(is_sorted(all(arr))) pr(0);
    else{
        ll c= arr[0]+arr[n-1];
        if(c%2) arr[n-1]=arr[0];
        else arr[0]=arr[n-1];
        p[a].first=1;
        p[a].second=n;
        a++;
        fr(i,1,n-1){
            if(arr[i]==arr[0]) continue;
            else {
                if((arr[i]+arr[0])%2){
                    p[a].first=1;
                    p[a].second=i+1;
                }
                else{
                    p[a].first=i+1;
                    p[a].second=n;
                }
                a++;
            }
        }
        pr(a);
        fr(i,0,a){
            cout<<p[i].first<<" "<<p[i].second<<endl;
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