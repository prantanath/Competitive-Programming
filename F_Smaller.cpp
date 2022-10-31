//Author:  Pranta
//Date:    2022-Oct-15
//Problem: F_Smaller
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
    ll mx1=0,mx2=0,lns=1,lnt=1;
    fr(i,0,n){
        ll x,y;
        string ss;
        cin>>x;
        if(x==1){
            cin>>y>>ss;
            lns+=(y*ss.size());
            for(auto a:ss) mx1=max(mx1,(a-'a')*1ll);
        }
        else{
            cin>>y>>ss;
            lnt+=(y*ss.size());
            for(auto a:ss) mx2=max(mx2,(a-'a')*1ll);
        }
        //aaaaaaac
        //aaaaaaab
        if(mx2>0) pr("YES");
        else if(mx1==mx2){
            if(mx1==0) {
                cout<<(lns<lnt?"YES":"NO")<<endl;;
            }
            else pr("YES");
        }
        else pr("NO");

        
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