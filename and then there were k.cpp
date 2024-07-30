#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
ll solve(ll base,ll pow)
{
    ll res=1;
    while(pow)
    {
        if(pow%2==0)
        {

            base*=base;
            pow/=2;



        }
        else if(pow%2==1)
        {
            res*=base;
            pow--;



        }




    }
    return res;


}
int main()
{
int t;
cin>>t;
while(t--)
{


 ll n;
 cin>>n;

 ll k=(log2(n));
 //cout<<k<<nl;
 cout<<solve(2,k)-1<<nl;

}
}
