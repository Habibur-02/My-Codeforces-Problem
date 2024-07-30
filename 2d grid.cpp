#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
const int N=105;
int vis[N][N];
string s[N];
int dx[]={0,-1,0,+1,-1,-1,+1,+1};
int dy[]={+1,0,-1,0,+1,-1,-1,+1};
int n,m;
void dfs(int i,int j)
{
    vis[i][j]=1;

    for(int k=0;k<8;k++)
    {
        int nxti=i+dx[k];
        int nxtj=j+dy[k];

        if(nxti>=0 && nxti<n && nxtj>=0 && nxtj<m && s[nxti][nxtj]=='@' && vis[nxti][nxtj]!=1 )
        {
            dfs(nxti,nxtj);
        }
    }

}

int main()
{
  //  int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        {

            cin>>s[i];


        }
        int c=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
    if(vis[i][j]!=1 && s[i][j]=='@')
    {

        dfs(i,j);
        c++;


    }
    }

}
cout<<c<<nl;

}
