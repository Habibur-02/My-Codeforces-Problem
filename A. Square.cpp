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

int t;
cin>>t;
while(t--)
{


  vector<pair<int,int>>v;
  for(int i=1;i<=4;i++)
  {
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});


  }

  sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int>y)
         {
             if(x.first==y.first)
            return (x.second<y.second);
             return x.first<y.first;
         });


      cout<<abs(v[0].second-v[1].second)*abs(v[0].second-v[1].second)<<'\n';


}

}





