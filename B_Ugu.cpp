//Author:  Pranta
//Date:    2022-Oct-24
//Problem: B_Ugu
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
    cin>>s;
    t=s;
    char a ;
    bool f = false,ok=false;
    ll cnt=0,stPos=-1,enPos=-1;
    if(is_sorted(all(s))){
        pr(0);
        return;
    }
    reverse(all(t));
    if(is_sorted(all(t))){
        pr(1);
        return;
    }
    fr(i,0,n){
        if(s[i]=='1') ok=true;
        if(ok){
            if(s[i]=='0') {
                stPos=i;
                break;
            }
        }
    }
    // pr(stPos);
    fr(i,stPos,n){
        if(!f) a='0';
        else a='1';
        if(s[i]==a){
            cnt++;
            if(!f) f=  true;
            else f= false;
        }
    }
    
    pr(cnt);
}
int main()
{ 
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}