#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int vis[1000];
int dis[1000];
vector<int>v[1000];
int bfs(int node)
{


    vis[node]=1;
    dis[node]=0;

    queue<int>q;
    q.push(node);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(auto child:v[cur])
        {
            if(vis[child]==0)
            {
                q.push(child);
                dis[child]=dis[cur]+1;
                vis[child]=1;





            }



        }



    }


}
int main()
{

int t;
cin>>t;
while(t--)
{



    int n,e;
    cin>>n>>e;

    while(e--)
    {

        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);


    }
    int s;
    cin>>s;
for(int i=1;i<=n;i++) dis[i]=-1;
    memset(vis,0,sizeof vis);



    bfs(s);

    for(int i=1;i<=n;i++)
    {
        if(i==s) continue;
 if(dis[i]==-1) cout<<dis[i]<<" ";
     else   cout<<dis[i]*6<<" ";


    }





    cout<<nl;


}





}
