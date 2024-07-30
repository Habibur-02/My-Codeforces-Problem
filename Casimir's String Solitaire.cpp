#include<bits/stdc++.h>
using namespace std;
#define yes  cout<<"YES"<<'\n'
#define no  cout<<"NO"<<'\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else c++;
    }

    if(a==0 && b!=0 && c!=0)
    {
        if(b==c)
        {

           // cout<<"NO"<<'\n';
           yes;
        }
        else no;

    }
   /* else if(b==0 && a!=0 && c!=0)
    {


        if(a==c)
        {
            yes;
        }
        else no;
    } */
    else if(c==0 && a!=0 && b!=0)
    {


        if(a==b)
        {
            yes;
        }
        else no;

    }
    else if(a && b && c)
    {
        if(a+c==b)
        {
            yes;

        }
        else no;


    }
    else
    {
        no;


    }


    }

}
