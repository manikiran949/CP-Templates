/*
   Mani Kiran , 2212056
*/

/*
 
█▒▒▒▒▒▒▒▒▒
10%
███▒▒▒▒▒▒▒
30%
█████▒▒▒▒▒
50%
███████▒▒▒
70%
██████████
100%

*/
#include<iostream>
#include<bits/stdc++.h>
// #pragma comment(linker,"/stack:200000000")
// #pragma GCC optimize("O1")
// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define f2(i,a,b) for(ll i=a;i<b;i+=2)
#define fr(j,a,b) for(ll j=b-1;j>=a;j--)
#define vsort(a) sort(a.begin(),a.end())
#define vrsort(a) sort(a.begin(),a.end(),greater< ll >())
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define vll vector<ll>
#define pb emplace_back
#define ins insert
#define fi first
#define se second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e "\n"
#define spc " "
#define sqrt(x) sqrtl(x)
#define mkp make_pair
#define siz(x) ((ll)(x).size())
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define io freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define mod 1000000007
#define mod2 998244353
#define PI 3.141592653589793238
#define get(a,n) vector<ll>a(n); f(i,0,n) cin>>a[i]
#define put(a) f(i,0,a.size()) cout<<a[i]<<spc; cout<<e
#define all(v) v.begin(), v.end()
#define rall(v) (v).rbegin(),(v).rend()
#define sz(x) ((ll)(x).size())
#define setbits(x) __builtin_popcountll(x)
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define db1(x)              cout<<#x<<": "<<x<<"\n"
#define db2(x, y)           cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n"
#define db3(x, y, z)        cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n"
#define db4(a, b, c, d)     cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n"
#define db5(a, b, c, d, e)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<"\n"
using namespace std;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}
ll gcd(ll a,ll b){return __gcd(a,b);}
ll ceil(ll a,ll b){return (a+b-1)/b;}
ll power(ll x,ll y,ll p){ll res=1;x=x%p;while(y>0){if(y&1) res=(res*x)%p;y=y>>1;x=(x*x) % p;}return res;}
ll modInverse(ll n,ll p){return power(n, p - 2, p);}
ll nCrModPFermat(ll n,ll r,ll p){if(n<r) return 0;if(r==0) return 1;ll fac[n+1];fac[0] = 1;for(int i=1;i<=n;i++){ 
fac[i]=(fac[i-1]*i)%p;}return (fac[n]*modInverse(fac[r],p)%p*modInverse(fac[n-r],p)%p)%p;}
ll fact(ll n,ll m){ll x=1;f(i,2,n+1){x=x*i%m;}return x;}
ll inv(ll a, ll m) {return a <= 1 ? a : m - (ll)(m/a) * inv((m % a), m) % m;}
void solve();
signed main(){fastio();solve();return 0;}

/******************TEMPLATE ENDS*************************/

void solve(){
    int t; cin>>t;
    while(t--){
        
    }
}
