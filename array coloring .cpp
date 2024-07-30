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
    int o=0,e=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

        if(ar[i]%2==1) o++;
        else e++;
    }
    if(n==1) cout<<"NO"<<nl;
    else if( o==0 || e==0) cout<<"YES"<<nl;
    else if(o%2==0 && e!=0)
    {
        cout<<"YES"<<nl;
    }
    else if(o%2==1 && e!=0) cout<<"NO"<<nl;

    }

}
