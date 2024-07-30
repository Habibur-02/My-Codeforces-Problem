#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;

    int ar[n+3];
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];

    }
    int r=1;
    int sm=0;
    int ans=0;

    for(int i=1;i<=n;i++)
    {

        while(r<=n && sm+ar[r]<=t)
        {

            sm+=ar[r];
            r++;

        }

        sm-=ar[i];
        ans=max(ans,r-i);



    }

    cout<<ans;



}
