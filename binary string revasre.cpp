#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int n;
    cin>>n;
    string s;
    cin>>s;
   // int zero=0,one=0;
    int i=0,j=n-1;
    while(s[i]=='0' && i<n)
    {
      i++;

    }
   // i=n-1;
     while(s[j]=='1' && j>=0)
    {
      j--;

    }
    if(j<i) cout<<s<<'\n';
    else
    {


    string ans="";
    for(int x=0;x<i;x++)
    {
       ans+='0';
    }
    ans+='0';
     for(int x=j;x<n-1;x++)
    {
       ans+='1';
    }
    cout<<ans<<'\n';

    }
    }

}
