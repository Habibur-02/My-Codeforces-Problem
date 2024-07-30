#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int32_t main()
{

     ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
ll t;
cin>>t;


  while(t--)
  {


ll n;
cin>>n;


ll ans;

ans=(n-2)*(n-1);
ans+=n-1;
ans+=4*(n);

cout<<ans+1<<nl;

}
}

