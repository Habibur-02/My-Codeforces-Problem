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

string a,b;
int dp[101][101];
int solve(int i,int j)
{
    if(i>=a.size() or j>=b.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    int ans=solve(i,j+1);
    ans=max(ans,solve(i+1,j));


    if(a[i]==b[j])
    {
        ans=max(ans,1+solve(i+1,j+1));


    }
    return dp[i][j]=ans;



}


void p(int i,int j)
{
    if(i>=a.size() or j>=b.size()) return ;

    if(a[i]==b[j])
    {

        cout<<a[i];
        p(i+1,j+1);
        return;


    }

 int x=solve(i,j+1);
    int y=solve(i+1,j);


   if(x>=y) p(i,j+1);
   else p(i+1,j);

   // return ans;



}








int32_t main()
{ fast
  int t;
  cin>>t;
  int cs=1;
  while(t--)
  {


  cout<<nl;
  cin>>a>>b;
  memset(dp,-1,sizeof dp);
 if(solve(0,0)==0)  cout<<"Case "<<cs++<<": :(";
 else
 {
     cout<<"Case "<<cs++<<": ";
     p(0,0);
    // cout<<'\n';

 }



  }








}

