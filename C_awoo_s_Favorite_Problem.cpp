//Author:  Pranta
//Date:    2022-Nov-05
//Problem: C_awoo_s_Favorite_Problem
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
    string s,t;
    cin>>s>>t;
    bool ok = true,f=false;
    ll ans=0;
    if(s==t){
        pr("YES");
        return;
    }
    fr(i,0,n){
        if(s[i]== 'a' and t[i]=='c' || s[i]== 'c' and t[i]=='a') {
            pr("NO");
            return;
        }
    }
    fr(i,0,n){
        if(s[i]== 'a' and t[i]=='b') ans++;
        if(s[i]== 'b' and t[i]=='a') ans--;
        if(s[i]=='c' || t[i]=='c') ok=false;
        else ok=true;
        if(ans) f=true;
        if(ans<0 || (ans and !ok)){
            pr("NO");
            return;
        }
    }
    if(ans){
        pr("NO");
        return;
    }
    ans=0;ok=true;
    fr(i,0,n){
        if(s[i]== 'b' and t[i]=='c') ans++;
        if(s[i]== 'c' and t[i]=='b') ans--;
        if(s[i]=='a' || t[i]=='a') ok=false;
        else ok=true;
        if(ans) f=true;
        if(ans<0 || (ans and !ok)){
            pr("NO");
            return;
        }
    }
    if(!ans and f) pr("YES");
    else pr("NO");
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}