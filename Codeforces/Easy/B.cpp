#include <iostream>
#include <string>
#include <vector>
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
        string s;
        cin>>s;
        vector<int> v(26,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'A']==0)
            {
                ans+=2;
                v[s[i]-'A']=1;
            }
            else
            {
                ans+=1;
            }
        }
       cout<<ans<<endl; 
	}
	return 0;
}
