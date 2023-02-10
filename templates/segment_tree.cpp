#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long N = 2e5+10;
vector<long long>A(N),tree(4*N);
//build tree
void build(ll node ,ll st , ll en){
    if (st==en) tree[node]=A[st];
    else{
        ll mid = (st+en)/2;
        build(2*node,st,mid);
        build(2*node+1,mid+1,en);
        tree[node] = tree[2*node]+tree[2*node+1];
    }
}

//query
ll query(ll node, ll st, ll en, ll l, ll r){
    if (st>r || l>en) return 0;
    if(l<=st and en<=r) return tree[node];
    ll mid = (st+en)/2;
    ll q1 = query(2*node,st,mid,l,r);
    ll q2 = query(2*node+1,mid+1,en,l,r);
    return q1+q2;
}
//update
void update(ll node,ll st,ll en,ll idx,ll val){
    if(st==en){
        A[st]=val;
        tree[node]=val;
    }
    else{
        ll mid = (st+en)/2;
        if(idx<=mid){
            update(2*node,st,mid,idx,val);
        }
        else{
            update(2*node+1,mid+1,en,idx,val);
        }
        tree[node] = tree[2*node]+tree[2*node+1];
    }
} 