#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define nl '\n'
#define ll long long
ll solve(ll base,ll power)
{
    ll res=1;
    //ll power=9;


    while(power)
    {
        if(power%2==0)
        {
            base=((base%mod)*(base%mod))%mod;
            power/=2;

        }

        else
        {
            res=((res%mod)*(base%mod))%mod;
            power--;

        }



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
  //  n=(n%mod) * (n%mod);
   //ll k=n/2;

   //cout<<k -1<<nl;


  // cout<<(8*solve(9,n-1))%mod<<nl;

  cout<<solve(2,5);


}
}
