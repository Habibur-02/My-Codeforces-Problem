#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;



    ll red=(n/a);
    ll blue=(n/b);


    ll lcm=(a*b)/(__gcd(a,b));


    ll avg=(n/lcm);
    ll ans;

    if(p>q)
    {
        ans=(blue-avg)*q+red*p;
    }
    else if(p<q)
    {
        ans=(red-avg)*p+blue*q;
    }

    else
    {

        if(red>blue) ans=(blue-avg)*q+red*p;
        else ans=(red-avg)*p+blue*q;



    }

    cout<<ans<<endl;

}
