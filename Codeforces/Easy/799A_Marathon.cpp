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
	    ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll cnt=0;
        if(b>a){cnt++;}
        if(c>a){cnt++;}
        if(d>a){cnt++;}
        cout<<cnt<<endl;
        
	}
	return 0;
}

