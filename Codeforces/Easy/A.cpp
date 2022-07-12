#include <iostream>
#include<string>
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
        int cnt=0;
        if(s[0]=='y' || s[0]=='Y'){cnt++;}
        if(s[1]=='e' || s[1]=='E'){cnt++;}
        if(s[2]=='s' || s[2]=='S'){cnt++;}
        if(cnt==3){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
	}
	return 0;
}

