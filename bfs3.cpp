#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int vis[1000];
int d[100];
int bfs(int node,int dis)
{
    //d[node]=dis
    vis[node]=1;
    d[node]=0;
    queue<int>q;
    q.push(node);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        //if(vis[])
        for(auto child:v[cur])
        {
            if(vis[child]!=1)
            {


            q.push(child);
            vis[child]=1;
            d[child]=d[cur]+1;
            }
        }



    }



}
int main()
{

    int n,m;
    cin>>n>>m;
    while(m--)
    {

        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);


    }
    bfs(1,0);


   // for(auto i:d) cout<<i<<" ";
   for(int i=1;i<=n;i++)
   {

       cout<<d[i]<<" ";
   }




}
