#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<int>v[1000];
int vis[1000];
int dis[1000];
void bfs(int node)
{
    vis[node]=1;
    dis[node]=0;

    queue<int>q;

    q.push(node);

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

       // if(vis[node])
       for(auto child:v[cur])
       {

           if(vis[child]==0)
           {
               q.push(child);
               vis[child]=1;
               dis[child]=dis[cur]+1;


           }


       }




    }





}
int main()
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

    bfs(6);


    for(int i=1;i<=n;i++)
    {
        cout<<i<<"-->"<<dis[i]<<nl;


    }



}

