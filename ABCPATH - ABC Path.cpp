#include<bits/stdc++.h>
using namespace std;
int dis[100][100];

int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};
int n,m;
char ar[30][30];
int vis[100][100];
int d=1;
int solve(int p,int q)
{
    if(p>=1 && p<=n && q>=1 && q<=n) return true;
    return false;


}
int dfs(int i,int j)
{
    char c=ar[i][j];


    for(int p=0;p<8;p++)
    {

        int nxti=i+dx[p];
        int nxtj=j+dy[p];

        if(solve(nxti,nxtj)==true && /*vis[nxti][nxtj] && */ ar[nxti][nxtj]==c+1)



             {
                 //cout<<d<<'\n';
                 d=1+dfs(nxti,nxtj);
             cout<<d<<'\n';
             }
    }

    return d;


}
int main()
{
 //int n;
 cin>>n;


 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=n;j++) cin>>ar[i][j];


 }



   cout<<dfs(1,1);



}
