
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
		ll cnt,ans=0;
		cnt=pow(2,n);
		for(int i=1;i<=cnt;i++)
		{
			if((i+(i+1))%2==0)
			{
				ans=i+1;
			}
			else
			{
				ans=i;
			}
			i++;
		}
        cout<<ans<<endl;
	}
	return 0;
}


