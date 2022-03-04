#include <iostream>
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
        ll n, s, cnt = 0;
        cin >> n >> s;
        cout<<s/(n*n)<<endl;
    }
    return 0;
}
