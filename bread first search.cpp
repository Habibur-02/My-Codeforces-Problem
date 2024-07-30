#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
const int M=100;
vector<int>v[M];
int vis[M];
int d[M];
void bfs(int node,int dis)
{
    vis[node]=1;
    d[node]=0;

    queue<int>q;
    q.push(node);

    while(!q.empty())
    {
        int c_n=q.front();
        q.pop();

        for(auto child:v[c_n])
        {

            if(!vis[child])
            {

                d[child]=d[c_n]+1;
                vis[child]=1;
                q.push(child);

            }


        }



    }



}






 int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);


    int n;
    cin>>n;

    for(int i=1;i<=n;i++) d[i]=-1;

   for(int i=1;i<=n;i++)
    {


        int u,k;
        cin>>u>>k;
        while(k--)
        {

            int p;
            cin>>p;
            v[u].push_back(p);
          //  v[p].push_back(u);

        }


    }




    bfs(1,0);



    for(int i=1;i<=n;i++) cout<<i<<" "<<d[i]<<nl;

}
