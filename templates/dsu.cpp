#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct DSU{
    ll n;
    vector<ll>parent,len;
    DSU(ll N){
        n = N;
        parent.assign(n+1,-1);
        len.assign(n+1,1);
        fr(i,0,n+1) parent[i]=i;
    }
    ll Find(ll x){
        if(parent[x] == x) return x;
        return parent[x] = Find(parent[x]);
    }
    void Union(ll a,ll b){
        a = Find(a);
        b = Find(b);
        if(a!=b){
            if(len[a]<len[b]){
                swap(a,b);
            }
            parent[b] = a;
            len[a]+=len[b];
        }
    }
};