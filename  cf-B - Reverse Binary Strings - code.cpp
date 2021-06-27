#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define mod 1e9+7
void print(vector<ll> v) {rep(i, 0, v.size()) cout<< v[i]<<" "; cout<< endl;}

int main() 
{

    #ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
    #endif 
    io;
    ll t; cin >> t;

    while(t--)
    {
		ll n, j;  
		string s; cin >> n>> s;
		ll ans=0, count=0, ans1=0;

		rep(i, 0, n)
		{
			count=0;
			if(s[i]==s[i+1] && s[i]=='1')
			{	j=i;
				while(s[j]=='1')
				{
					count++;
					j++;
				}
				ans+=count-1;
				i=j-1;
			}
		}

		rep(i, 0, n)
		{
			count=0;
			if(s[i]==s[i+1] && s[i]=='0')
			{	j=i;
				while(s[j]=='0')
				{
					count++;
					j++;
				}
				ans1+=count-1;
				i=j-1;
			}
		}
		cout << max(ans, ans1) << endl;
    }
	return 0;
}
