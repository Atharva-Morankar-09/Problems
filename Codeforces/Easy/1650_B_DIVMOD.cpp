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
        char c;
        cin>>c;
        int a=-1;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                if(i%2==0)
                {
                    a=1;
                    break;
                }
            }
        }
       if(a==1){cout<<"YES"<<endl;}
       else{cout<<"NO"<<endl;} 
	}
	return 0;
}
