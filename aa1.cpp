#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


   int a,b,c;
   cin>>a>>b>>c;

 int   mn=min(a,min(b,c));
    if(mn==a) cout<<"First"<<nl;
    if(mn==b) cout<<"Second"<<nl;
    if(mn==c) cout<<"Third"<<nl;


    }

}

