
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, r, k, sum = 0, ans = 0,x;
        cin >> n >> l >> r >> k;
        vector<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            s.push_back(x);
        }
        sort(s.begin(),s.end());
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] >= l && s[i] <= r)
            {
                sum+=s[i];
                if(sum>k)
                {
                    break;
                }
                else
                {
                    ans++; 
                }
               
            }
        }
        cout << ans << endl;
    }
    return 0;
}
