//Author:  Pranta
//Date:    2022-Sep-29
//Problem: H_2_Maximum_Crossings_Hard_Version
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename num_t>
using ordered_set = tree<num_t,null_type,less<num_t>,rb_tree_tag,tree_order_statistics_node_update>;
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
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    inp(v,n);
    ordered_set<pair<ll,ll>>os;
    ll ans=0;
    fr(i,0,n){
        ans+=os.size()-(os.order_of_key({v[i],0}));
        os.insert({v[i],i});
    }
    // for(auto x: os){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // insert 4,0
    // 1-0 = 1 insert 1,1
    // 2-1 = 1 insert 4,2
    // 3-3 = 0 insert 6,3
    // 4-4 = 0 insert 7,4
    // 5-4 = 1 insert 7,5
    // 6-3 = 3 insert 5,6
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