#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
 ll n=1000000000000L;

    ll x;
    cin>>x;
    //ll ar[100000];

    unordered_set<ll>s;

    for(ll i=1;i*i*i<=n;i++)
    {
        s.insert(i*i*i);

    }

    int c=0;
    for(ll i=1;i*i*i<=x;i++)
    {
        if(s.count(x-i*i*i)!=0)
        {  c++;
         break;
        }
    }

    if(c==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    }

}
