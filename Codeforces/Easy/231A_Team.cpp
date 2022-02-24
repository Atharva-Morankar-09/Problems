
#include<iostream>
using namespace std;

int main()
{
    int n,ans=0,x,y,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        cin>>x>>y>>z;
        if(x==1){cnt++;}
        if(y==1){cnt++;}
        if(z==1){cnt++;}
        if(cnt>=2){ans++;}
    }
  cout<<ans;    
}