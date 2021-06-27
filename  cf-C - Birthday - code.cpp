#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
#define print(v) for(ll i=0; i<v.size(); i++) {cout<<v[i]<< " ";} cout<< endl;
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define mod 1e9+7
int main()
{
    io; 
   
    ll t;// cin >> t;
    t=1;
    while(t--)
    {
     ll n, x; cin >> n;
     vector<ll> v;
     rep(i, 0, n) {cin >> x; v.pb(x);}
     sort(all(v));
     vector<ll> ans1, ans2;
     rep(i, 0, n) 
     {
         if(i%2==0) ans1.pb(v[i]);
         else ans2.pb(v[i]);
     }
     rep(i, 0, ans1.size()) cout<< ans1[i]<< " ";
     reverse(all(ans2));
     rep(i, 0, ans2.size()) cout<< ans2[i]<< " ";
     cout<< endl;
    }
    return 0;
}