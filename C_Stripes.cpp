//Author:  Pranta
//Date:    2022-Oct-13
//Problem: C_Stripes
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
    string s[10];
    fr(i,0,8){
        cin>>s[i];
    }
    ll r=0,b=0;
    fr(i,0,8){
        fr(j,0,s[i].size()) {
            if(s[i][j]=='R') r++;
        }
        if(r==8) {
            pr("R");
            return;
        }
        else r=0;
    }
    fr(i,0,8){
        fr(j,0,s[i].size()){
            if(s[j][i]=='B')b++;
        }
        if(b==8) {
            pr("B");
            return;
        }
        else b=0;
    }
    // cout<<r<<" "<<b<<endl;
    
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}