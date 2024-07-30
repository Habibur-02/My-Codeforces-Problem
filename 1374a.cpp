#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int x,y,n,p;
    cin>>x>>y>>n;

    p=floor((n-y)/x);

    cout<<p*x+y<<endl;

    }


}
