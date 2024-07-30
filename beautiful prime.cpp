#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define mod 1000000007
#define nl '\n'
#define ll long long
ll pow1(ll base,ll power)
{
    ll res1=1;

    while(power!=0)
    {
        if(power%2==0)
        {
            base=((base%mod)*(base%mod))%mod;
            power/=2;

        }
        else if(power%2==1)
        {
            --power;
            res1= ((res1%mod)*(base%mod))%mod;


        }


    }

    return res1%mod;


}
ll solve(ll p,ll n)
{
    ll res=0;


    for(ll i=1;i<=n;i++)
    {

        res+=pow1(p,i);
        res%=mod;



     //cout<<res<<" ";
    }

    return res%mod;


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {



    ll n;
    cin>>n;
    //n%=mod;
    ll ar[n];
    ll br[n];

    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        ar[i]%=mod;

    }


    for(ll i=0;i<n;i++)
    {
        cin>>br[i];
        br[i]%mod;

    }


    ll sum=1;

    for(ll i=0;i<n;i++)
    {




        sum*=solve(ar[i],br[i]);

        sum%=mod;

    }



    cout<<sum%mod<<nl;


    }
}
