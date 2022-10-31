//Author:  Pranta
//Date:    2022-Sep-23
//Problem: C_Removing_Smallest_Multiples
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
    string s;
    cin>>s;
    vector<ll>eli;
    ll ans=0;
    ll mp[n]={0},used[n]={0};
    fr(i,0,n){
        if(s[i]=='0') eli.pb(i+1),mp[i+1]++,used[i+1]++;
    }
    SORT(eli);
    ll x=eli.size();
    if(eli.empty()) {
        pr(0);
        return;
    }    ll la=*max_element(all(eli));

        // fr(i,0,eli.size()) cout<<eli[i]<<" ";
        fr(i,0,x){
            ll lop=la/eli[i];
            fr(j,1,lop+1){
                ll c = eli[i]*j;
                // cout<<c<<endl;
                // pr(mp[c]);
                if(mp[c]) ans+=eli[i],mp[c]=0;
                else{
                    // cout<<c<<" "<<prev<<endl;
                    // pr(mp[prev]);
                    if(!used[c]) break;
                    // else continue;
                }
            }
        }
        pr(ans);
        // pr("");
    
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}