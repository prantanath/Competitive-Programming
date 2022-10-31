//Author:  Pranta
//Date:    2022-Oct-23
//Problem: C_Save_the_Magazines
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
    string s;
    cin>>n>>s;
    vector<ll>v(n);
    inp(v,n);
    ll mn=0,mx=0;
    fr(i,0,n){
        ll p;
        if(s[i]=='0'){
            ll p=i+1;
            while (p < n and s[p] == '1' and v[p]>=v[i])
                p++;
            if (s[p] == '1' and v[i] > v[p])
            {
                s[p] = '0';
                s[i] = '1';
            }
            i = p - 1;
            break;
        }
            // i=j-1;
        }
    
    fr(i,0,n){
        if(s[i]=='1') mx+=v[i];
    }
    pr(mx);
    
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}