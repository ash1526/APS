#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define inf LLONG_MAX
#define ninf LLONG_MIN
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll power(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll powermod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        ll n, m, x, sum=0;
        vector<ll> v1, v2;
        vector<ll> presum1, presum2;
        
        cin >> n;
        rep(i, 0, n)
        {
            cin >> x; v1.pb(x);
            sum+=x;
            presum1.pb(sum);
        }
        
        cin >> m;
        sum=0;
        rep(i, 0, m)
        {
            cin >> x; v2.pb(x);
            sum+=x;
            presum2.pb(sum);
        }
        
        ll ans =0;
        //cout<< _max(presum1)<< " "<< _max(presum2)<< endl;
       
       ll val1=_max(presum1);   
    ll val2=_max(presum2);
        
        if(val1>0) {}
        else val1=0;
        if(val2>0) {}
        else val2=0;
        
        ans+=val1+val2;
        if(ans<=0) cout<< 0 << endl;
        else cout << ans << endl;
    }
	return 0;
}
