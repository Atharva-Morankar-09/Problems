
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            ll x,m,f;
            x=n%7;
            m=7-x;
            f=n%10;
            if(f+m<10)
            {
                n+=m;
            }
            else
            {
                n-=x;
            }
           cout<<n<<endl; 
        }
        
	}
	return 0;
}
