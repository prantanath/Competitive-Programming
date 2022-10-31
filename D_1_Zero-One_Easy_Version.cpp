//Author:  Pranta
//Date:    2022-Sep-26
//Problem: D_1_Zero-One_Easy_Version
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
    ll n,x,y;
    cin>>n>>x>>y;
    string s1,s2;
    cin>>s1>>s2;
    ll c=0;
    vector<ll>pos;
    string cc;
    fr(i,0,s1.size()){
        if(s1[i]!=s2[i]){
            c++;
            pos.pb(i);
        }
    }
    // pr(cc);
    ll ans=0;
    if(c%2) {pr(-1);return;}
    if(c==2){

        if(pos[0]+1==pos[1])ans+= min(2*y,x);
        else ans+=y;
    }
    else {
        ans+=(c/2)*y;
    }
    
    
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