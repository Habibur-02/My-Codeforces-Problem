#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};

#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
const ll INF=numeric_limits<ll>::max()-1;
#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
ll solve(ll base,ll power,ll mod)
{


   ll res=1;
    while(power)
    {


        if(power%2)
        {
            res=((res%mod)*(base%mod))%mod;
            power--;


        }
        else
        {
            base=((base%mod)*(base%mod))%mod;
            power/=2;

        }

    }
    return res%mod;

}
int isprime(int n)
{
  set<int>s;

    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            s.insert(i);
            n/=i;

        }

    }
    if(n>1) s.insert(n);
    if(s.empty())
  return   1;


  ll res=1;

  for(auto k:s) res*=(k-1);
  return res;



}
int main()
{



ll x,y,n;

while(cin>>x >>y>>n)
{







   cout<<solve(x,y,n)<<'\n';



}








}





