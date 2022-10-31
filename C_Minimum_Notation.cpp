//Author:  Pranta
//Date:    2022-Sep-25
//Problem: C_Minimum_Notation
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
    string s;
    cin>>s;
    string t,ans="";
    ll sz=s.size();
    vector<ll>v;
    ll mn = s[sz-1]-'0';
    ans+=to_string(mn);
    rfr(i,0,sz-1){
        if(s[i]-'0'<=mn) {
            ans+=(s[i]);
            mn=s[i]-'0';
        }
        else ans+=to_string(min(s[i]-'0'+1,9)); 
    }
    sort(all(ans));
    // fr(i,0,v.size()) ans+=to_string(v[i]);
    // vout(v);
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