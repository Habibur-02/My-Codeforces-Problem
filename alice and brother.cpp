#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
ll solve(int n)
{
 int c=0;
    for(ll i=1;i*i<=n;i++)
    {

        if(n%i==0)

        {

            ll x=i;
            ll y=n/i;

            if((x+y)%2==0) c++;


        }

    }
 return c;


}
int main()
{

    ll n;
    cin>>n;

   cout<< solve(n)<<nl;




}
