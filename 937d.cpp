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

vector<int>v={10,11,110,101,1111,1011,1101,1110,1001,1100,1000};
map<int,int>m;
for(int i=0;i<v.size();i++) m[v[i]]++;


int t;
cin>>t;
while(t--)
{


int n;
cin>>n;

 int p=n;
 int x=n;
 int mx=-1;
 while(p)
 {
     mx=max(mx,p%10);
     p=p/10;


 }
 if(m.find(n)!=m.end())
 {
     cout<<"YES"<<'\n';
     continue;
 }
 if(p>6)
 {
     cout<<"NO"<<'\n';
     continue;
 }
 bool ok=true;
 while(x!=1)
 {
     int q=0;

  for(int i=0;i<v.size();i++)
  {
      if(x%v[i]==0)
      {

          x=x/v[i];
          q++;
      }
  }

  if(q==0)
  {
      ok=false;
      break;

  }


 }
if(ok) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';

}


}





