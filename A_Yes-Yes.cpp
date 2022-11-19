//Author:  Pranta
//Date:    2022-Nov-18
//Problem: A_Yes-Yes
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
    fr(i,0,s.size()){
        if(s[i]!='Y' and s[i]!='e' and s[i]!='s') {
            pr("NO");
            return;
        }
    }
    if(s=="yes"){
        pr("NO");
        return;
    }
    ll n=s.size();
    fr(i,0,n-1){
        if(s[i]=='Y' and s[i+1]=='e' || s[i]=='e' and s[i+1]=='s' || s[i]=='s' and s[i+1]=='Y') continue;
        else{
            pr("NO");
            return;
        }
    }
    pr("YES");
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}