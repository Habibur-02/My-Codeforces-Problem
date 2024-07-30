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
string s[55];
int vis[60][60];
int mx=0;
bool ok(int i,int j,int n,int m)
{


    return (i>=0 && i<n && j>=0 && j<m);
}
int  dfs(int i,int j,int n,int m,int l)
{

    int ans=1;
    //if(vis[i][j]) return;
    vis[i][j]=1;

 // mx=max(mx,l);

    for(int p=0;p<8;p++)
    {
        int ni=i+dx[p];
        int nj=j+dy[p];
       // int ans=0;

        if(ok(ni,nj,n,m)  && !vis[ni][nj] && s[ni][nj]==s[i][j]+1)
        {
         ans=max(ans,1+dfs(ni,nj,n,m,l+1));

        }

    }

    return ans;

}
int32_t main()
{ fast
int tc=1;


int n,m;
cin>>n>>m;

//if(n==0 || m==0 ) break;


for(int i=0;i<n;i++) cin>>s[i];
int an=0;
bool ok=false;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(s[i][j]=='A')
        {
          //  ans=max(ans,dfs(i,j,n,m));
         an=max(an, dfs(i,j,n,m,1));
          ok=true;
        }

    }
}
cout<<an;







}





