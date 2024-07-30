#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
ll solve(ll n)
{

      ll ans=n;
      ll i=2;
      while(1)
      {

        ll k=n/i;
        if(k==0) break;

        else
        {
            ans+=k;

        }

      i=i*2;


    }

    return ans;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {


 ll n;
 cin>>n;
 cout<<solve(n)<<nl;

    }
}
