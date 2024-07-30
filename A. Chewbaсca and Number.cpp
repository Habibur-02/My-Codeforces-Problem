#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};
char dir[]={'R','U','L','D'};
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

  ll x;
  cin>>x;
  vector<int>v;

  while(x)
  {
      v.push_back(x%10);
      x=x/10;


  }

 if(v[0]!=9 && v[0]>4) v[0]=9-v[0];

  for(int i=1;i<v.size();i++)
  {
      if(v[i]>4) v[i]=9-v[i];

  }

   for(auto j:v) cout<<j;




}





