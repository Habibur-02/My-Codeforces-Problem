#include<bits/stdc++.h>
using namespace std;
const int M=1000;
vector<int>v[M];
int vis[M];
int d[M];
int bfs(int node,int dis)
{
    vis[node]=1;
    d[node]=0;

    queue<int>q;
    q.push(node);


    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(auto child:v[cur])
        {


            if(!vis[child])
            {


                vis[child]=1;
                d[child]=d[cur]+1;
                q.push(child);


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
    bfs(1,0);



    for(int i=1;i<=n;i++) cout<<d[i]<<" ";
}

