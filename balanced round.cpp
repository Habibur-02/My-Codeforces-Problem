#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int32_t main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);




//cout<<max(3,5,8,2);
ll n,k;
cin>>n>>k;
ll ans=0;
int ar[n+3];
vector<int>v;

for(int i=1;i<=n;i++)  cin>>ar[i];

sort(ar,ar+n);

//<<ans+1+n-1+4*n<<nl;
int c=1;
for(int i=2;i<=n;i++)
{
    if(ar[i]-ar[i-1]<=k) c++;
    else
    {
        v.push_back(c);
        c=1;

    }



}
ll mx=INT_MIN;
for(auto h:v)
{


   // mx=max(h,mx);
   if(h>mx) mx=h;


}

cout<<n-mx<<nl;

}

