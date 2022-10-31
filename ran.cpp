#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename num_t>
using ordered_set = tree<num_t,null_type,less<num_t>,rb_tree_tag,tree_order_statistics_node_update>;
  

#define  ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef set<int> si;
typedef set<ll> sl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef stack<int> sti;
typedef deque<int> dqi;
typedef map<int,int>mi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vll;
typedef double dl;

const string  yo="YES";
const string no="NO";
#define ld long double
#define pq  priority_queue
#define ar array
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b)  (a/gcd(a,b))*b
const int inf = 2000000000;

const ll infll = 9000000000000000000;
const ll mod=1e9+7;
#define ins insert
#define F first
#define S second
#define gap " "
 


#define el '\n'
#define pf push_front
#define popf pop_front()
#define F0R(i,a,n) for(ll i=a;i<n;i++)
#define F0Rd(x,a,b)for(int x=a-1;x>=b;x--)
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)
#define mxe(a)   *max_element(all(a))
#define mne(a)   *min_element(all(a))
#define qsum(a)   accumulate(all(a),0ll);
#define clz(n)     __builtin_clz(n)
#define pcnt(n)     __builtin_popcount(n)
#define ctz(n)     __builtin_ctz(n)


template<class T> bool umin(T& a, const T& b) {
return b<a?a=b, 1:0;
}
template<class T> bool umax(T& a, const T& b) { 
return a<b?a=b, 1:0;
} 

ll FIRSTTRUE(function<bool(ll)> f, ll lb, ll rb) {
while(lb<rb) {
 ll mb=(lb+rb)/2;
 f(mb)?rb=mb:lb=mb+1; 
} 
return lb;
}
ll LASTTRUE(function<bool(ll)> f, ll lb, ll rb) {
while(lb<rb) {
 ll mb=(lb+rb+1)/2;
 f(mb)?lb=mb:rb=mb-1; 
} 
return lb;
}

template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
cin >> x;
}
void read(double& d) {
string t;
read(t);
d=stod(t);
}
void read(long double& d) {
string t;
read(t);
d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
read(h);
read(t...);
}
template<class A> void read(vt<A>& x) {
EACH(a, x)
 read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
EACH(a, x)
 read(a);
}

string to_string(char c) {
return string(1, c);
}
string to_string(bool b) {
return b?"true":"false";
}
string to_string(const char* s) {
return string(s);
}
string to_string(string s) {
return s;
}
string to_string(vt<bool> v) {
string res;
FOR(sz(v))
 res+=char('0'+v[i]);
return res;
}

template<size_t S> string to_string(bitset<S> b) {
string res;
FOR(S)
 res+=char('0'+b[i]);
return res;
}
template<class T> string to_string(T v) {
bool f=1;
string res;
EACH(x, v) {
 if(!f)
     res+=' ';
 f=0;
 res+=to_string(x);
}
return res;
}

template<class A> void write(A x) {
cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) { 
write(h);
write(t...);
}
void print() {
write("\n");
}
template<class H, class... T> void print(const H& h, const T&... t) { 
write(h);
if(sizeof...(t))
 write(' ');
print(t...);
}

void DBG() {
cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
cerr << to_string(h);
if(sizeof...(t))
 cerr << ", ";
DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

template<class T> void offset(ll o, T& x) {
x+=o;
}
template<class T> void offset(ll o, vt<T>& x) {
EACH(a, x)
 offset(o, a);
}
template<class T, size_t S> void offset(ll o, ar<T, S>& x) {
EACH(a, x)
 offset(o, a);
}

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) {
return uniform_int_distribution<ll>(a, b)(mt_rng);
}
template<class T, class U> void vti(vt<T> &v, U x, size_t n) {
v=vt<T>(n, x);
}
template<class T, class U> void vti(vt<T> &v, U x, size_t n, size_t m...) {
v=vt<T>(n);
EACH(a, v)
 vti(a, x, m);
}

long long binpow(long long a, long long b) {long long res = 1;while (b > 0) {if (b & 1)res = res * a;a = a * a;b >>= 1;}return res;}  
ll pw(ll a,ll b){if(b==0)return 1;if(b%2==0)return pw((a*a)%mod,b/2);return (pw(a,b-1)*a)%mod;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;} 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);} 
ll ceil_div(int64_t a, int64_t b) {return a / b + ((a ^ b) > 0 && a % b != 0);} 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
bool pd(string s){string tmp=s;reverse(all(tmp));return s==tmp;} 

const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
const int sz = 1e5+100;
const double pi = 3.141592653589793238462;
ld eps=1e-6; 

 
 
 
 
 
void solve(){
      ll l,r;
      cin>>l>>r;
      ll x=sqrt(l);
      ll y=sqrt(r);
      ll ans=(max(0ll,y-x-1))*3;
      set<ll>v;
      v.insert(x*x);
      v.insert(x*x+x);
      v.insert(x*x+2*x);
      v.insert(y*y);
      v.insert(y*y+y);
      v.insert(y*y+2*y);
      for(auto u:v){
      	 if(u<=r&&u>=l)ans++;
      }
      print(ans);

}


int32_t main() {

 ios_base::sync_with_stdio(0);cin.tie(0); 
  
int t=1;
                                read(t);
FOR(t) {
 // write("Case #", i+1, ": ");
   
  solve();
  }
}