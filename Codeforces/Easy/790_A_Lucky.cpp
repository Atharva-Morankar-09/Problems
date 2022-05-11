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
	    string s;
        cin>>s;
        ll s1=0,s2=0;
        s1+=s[0]-'0'+s[1]-'0'+s[2]-'0';
        s2+=s[3]-'0'+s[4]-'0'+s[5]-'0';
        if(s1==s2)
        {cout<<"Yes"<<endl;}
        else
        {cout<<"No"<<endl;}
        
	}
	return 0;
}

