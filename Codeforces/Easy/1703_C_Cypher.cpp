#include <iostream>
#include <vector>
#include <string>
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
        vector<int> v(n);
        
        for(int i=0;i<n;i++)
        {
             cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            string s1;
            cin>>s1;
            for(int j=0;j<x;j++)
            {
                if(s1[j]=='D')
                {
                    if(v[i]==9)
                    {
                        v[i]=0;
                    }
                    else{
                        v[i]+=1;
                    }
                }
                else if(s1[j]=='U')
                {
                     if(v[i]==0)
                    {
                        v[i]=9;
                    }
                    else
                    {
                        v[i]-=1;
                    }
                }
            }
        }

        for(auto x:v)
        {
            cout<<x<<" ";
        }
     cout<<endl;
        
	}
	return 0;
}
