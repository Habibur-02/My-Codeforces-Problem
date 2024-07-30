#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;

ll pow(ll b,ll p)
{
    ll t=1;
    while(p)
    {

        if(p%2==0)
        {

            b=(b*b)%mod;
             p=p/2;

        }
        else
        {

            t=(t*b)%mod;
            p--;
        }





    }

      //cout<<t%100007;
return t%mod;
}

int main()
 {

 int t;
 cin>>t;
 while(t--)
 {



    ll n,k;
    cin>>n>>k;
    //int p=pow(n,k);
    //int q=p%100000007;
    cout<<pow(n,k)<<endl;
    //cout<<q;

 }
}
