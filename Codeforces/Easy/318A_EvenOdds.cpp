
#include <bits/stdc++.h>
using namespace std;

//typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, k;
    cin >> n >> k;
    if(k <= (n+1)/2)
    {
        cout<<2*k-1;
    }
    else
    {
        k-=(n+1)/2;
        cout<<k*2;
    }

    return 0;
}

// 1 3 5 7 9 2 4 6 8 10