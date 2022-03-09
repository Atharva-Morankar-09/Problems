
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int l,r,a;
        cin>>l>>r>>a;
        long long int mx,x;
        mx=r/a+r%a;
        //cout<<mx<<" ";
		x=r/a*a-1;
        //cout<<x<<" ";
		if(x>=l)
        {
           mx=max(mx,x/a+x%a);
           //cout<<mx<<" ";
        } 
		cout<<mx<<endl;
	}
	return 0;
}
