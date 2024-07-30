#include<bits/stdc++.h>
using namespace std;
#define nl '\n';
#define ll long long
int32_t main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
int n,m;
cin>>n>>m;

map<ll,ll >d;
queue<int>q;
for(int i=1;i<=n;i++)
{
    ll x;
    cin>>x;
    d[x]=0;
    q.push(x);



}
vector<ll>v;
ll ans=0;
while(!q.empty() && m>0)
{

  ll u=q.front();
  q.pop();


  if(d.find(u+1)==d.end() && m>0)
  {
      d[u+1]=d[u]+1;
      q.push(u+1);
      ans+=d[u+1];
      v.push_back(u+1);
      m--;



  }
  if(d.find(u-1)==d.end() && m>0)
  {
      d[u-1]=d[u]+1;
      q.push(u-1);
      ans+=d[u-1];
      v.push_back(u-1);
      m--;



  }




}



  cout<<ans<<nl;

for(auto i:v) cout<<i<<" ";

}

