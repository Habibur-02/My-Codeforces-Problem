#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};
#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);


int32_t main()
{ fast

int n,q;
cin>>n>>q;
vector<pair<int,int>>v;
for(int i=1;i<=n;i++)
{

    int x;
    cin>>x;
    v.push_back({x,i-1});
}

  sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int>y)
         {
             if(x.first==y.first)
            return (x.second<y.second);///nijer iccha moto use kora jabe ai line,,,same value er choto index ta age nicchi ehkane

             return x.first<y.first;///ekhane choto theke boro value astetse,,,jodi boro value gulo age lage tahole x.first>y.first use kortam;
         });

  while(q--)
  {

      int p;
      cin>>p;

   int l=0;
   int h=n-1;

  while(h-l>1)
  {
      int mid=(h+l)/2;

      if(v[mid].first<p) l=mid+1;
      else h=mid;

  }


  if(v[l].first==p) cout<<v[l].second<<'\n';
  else if(v[h].first==p) cout<<v[h].second<<'\n';
  else cout<<-1<<'\n';






  }


}




