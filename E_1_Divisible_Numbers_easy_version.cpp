//Author:  Pranta
//Date:    2022-Nov-04
//Problem: E_1_Divisible_Numbers_easy_version
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define inp(a,n) ({ fr(i,0,n)cin>>a[i]; })
#define fr(i,a,n) for(ll i=a;i<n;++i)
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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=-1,y=-1;
    ll dividor = a*b;
    ll t=0;
    fr(i, a + 1, c + 1)
    {
        t = __gcd(dividor,i);
        t = dividor/t;
        x = i;
        y = (d / t) * t;
        if (y > b and y <= d)
        {
            cout << x << " " << y << endl;
            return;
        }
    }
    cout<<-1<<" "<<-1<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}