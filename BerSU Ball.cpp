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

int n;
cin>>n;
int ar[n+3];
for(int i=1;i<=n;i++) cin>>ar[i];
int m;
cin>>m;
int br[m+3];
for(int i=1;i<=m;i++)
{

    cin>>br[i];
}

  sort(ar+1,ar+n+1);
  sort(br+1,br+1+m);
int ans=0;
  for(int i=1;i<=n;i++)
  {



      for(int j=1;j<=m;j++)
      {
          if(abs(ar[i]-br[j])<=1)
          {
              ans++;
              br[j]=10000;
              break;
          }
      }



  }

  cout<<ans;




}





