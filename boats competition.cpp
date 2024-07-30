#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int n;
    cin>>n;
    int ar[n+3];
     map<int,int>m;

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        m[ar[i]]++;

    }
    int mx=INT_MIN;
    for(int i=2;i<=n*2;i++)
    {
       int  total=0;
        for(auto k:m)
        {


        int other=i-k.first;
        if(other>=1 && m.count(other))
        {

            total+=min(m[other],k.second);



        }



        }
total=total/2;

mx=max(total,mx);

    }
     cout<<mx<<nl;

    }

}


