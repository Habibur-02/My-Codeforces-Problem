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
int32_t main()
{ fast
int t;
cin>>t;
while(t--)
{



 ll n;
 cin>>n;
 ll ar[n+3];
 for(int i=1;i<=n;i++) cin>>ar[i];
 if(n==1)
 {
     cout<<ar[1]<<'\n';
     continue;
 }
 ll lcm=(ar[1]*ar[2])/(__gcd(ar[1],ar[2]));

 for(int i=3;i<=n;i++)
 {

     lcm=(lcm*ar[i])/(__gcd(lcm,ar[i]));



 }

cout<<lcm<<'\n';

}





}




