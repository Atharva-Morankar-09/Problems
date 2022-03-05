
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k, w, n;
    cin >> k >> w >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * k;
    }
    if (sum > w)
    {
        cout << sum - w;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
