#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
const int N=10006;
vector<int>v[N];
int vis[N];
int cnt[N];
int n;
void dfs(int node)
{
    vis[node]=1;
    cnt[node]++;

    for(auto child:v[node])
    {

        if(!vis[child])
        {
            dfs(child);



        }


    }

return;

}
int main()
{
int t;
cin>>t;
for(int y=1;y<=t;y++)
{


    int k,m;
    cin>>k>>n>>m;
    int ar[k+3];
    for(int i=1;i<=k;i++)
    {



        cin>>ar[i];
    }



    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }



    for(int i=1;i<=k;i++)
    {
       for(int i=1;i<=n;i++) vis[i]=0;
       if(!vis[i])
        dfs(ar[i]);



    }

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]==k) ans++;



    }


    cout<<"Case "<<y<<": "<<ans<<nl;


    for(int i=1;i<=n;i++)
    {
        cnt[i]=0;
    v[i].clear();
    }
}


}
