#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int32_t main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
int n;
cin>>n;
int ar[n+3][n+3],pre[n+3][n+3];
memset(ar,0,sizeof(ar));
memset(pre,0,sizeof(pre));

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        int x;
        cin>>x;
        ar[i][j]+=x;
    }
}


pre[1][1]=ar[1][1];
for(int i=2;i<=n;i++) pre[i][1]=ar[i][1]+pre[i-1][1];
for(int i=2;i<=n;i++) pre[1][i]=ar[1][i]+pre[1][i-1];


for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {

        pre[i][j]=ar[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];

    }
}

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<pre[i][j]<<" ";
    }
    cout<<nl;
}





}


