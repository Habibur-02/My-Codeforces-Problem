#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define nl '\n'
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll ar[n],br[n];

    for(ll i=1;i<=n;i++)
    {
        cin>>ar[i];
        ar[i]%=mod;
    }
    ll q;
    cin>>q;
    while(q--)
    {


    ll ty;
    cin>>ty;

    if(ty==0)
    {
        ll x,y;
        cin>>x>>y;

        ar[x]=y;
    }
    else
    {
        ll x;
        cin>>x;
        ll ans=1;
        for(ll i=1;i<=n;i++)
        {
           if(i==x)
           {
               continue;
           }
           else
           {
               ans=((ans%mod)*(ar[i]%mod))%mod;
           }
        }
        cout<<ans%mod<<nl;

    }

    }

}
