
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int s=str.size();
        if(s<=10)
        {
            cout<<str<<endl;
        }
        else
        {
            string res;
            res+=str[0]+to_string(s-2)+str[s-1];
            cout<<res<<endl; 
        }
    }
   return 0; 
}