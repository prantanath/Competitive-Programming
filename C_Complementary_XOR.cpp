//Author:  Pranta
//Date:    2022-Nov-06
//Problem: C_Complementary_XOR
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
    ll n,chk=0;
    string s,ss;
    cin>>n>>s>>ss;
    string t;
    fr(i,0,n){
        ll a=((ll)(s[i]-'0')^(ll)(ss[i]-'0'));
        t+=to_string(a);
    }
    ll zero = count(all(t),'0');
    ll one = n-zero;
    if(zero==n or one==n){
        pr("YES");
    vector<pair<ll,ll>>ans;
    fr(i,0,n){
        ll j = i;
        while (i < n && s[i] == '1') i++;
        if (j != i) ans.pb({j + 1, i}),chk++;
        
    }
    //00010
    //11111
    if(chk%2 and s[0]==ss[0] || chk%2==0 and s[0]!=ss[0]){
        ans.pb({1,n});
        ans.pb({1,1});
        ans.pb({2,n});
    }
    pr(ans.size());
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
    }
    else{
        pr("NO");
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