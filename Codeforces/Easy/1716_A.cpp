#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define loop(x, n) for (long long i = x; i < n; i++)
// loop(0,n) cin>>arr[i];
#define rloop(n, x) for (long long i = n; i >= x; i--)
// loop(n,0) cin>>arr[i];

ll gcd(ll x, ll y)
{
	// cout<<x<<" "<<y<<endl;
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

ll lcm(ll a, ll b)
{
	return (a * b) / gcd(a, b);
}

void solve()
{
	ll n;
	cin >> n;
    if(n==1)
    {cout<<2<<endl;}
    else if(n%3==0)
    {
        cout<<n/3<<endl;
    }
    else
    {
        cout<<n/3+1<<endl;
    }    
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}