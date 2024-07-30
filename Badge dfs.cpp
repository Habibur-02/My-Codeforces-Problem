#include<bits/stdc++.h>
using namespace std;
int vis[1000];
vector<int>v[1000];
 int ar[1000];
void dfs(int node)
{
    vis[node]=1;

    for(auto child:v[node])
    {
        if(vis[child]==1)
        {
            cout<<ar[child]<<" ";
            //break;
            return;
        }
        else dfs(child);

    }


}
int main()
{


    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        v[i].push_back(ar[i]);
        v[ar[i]].push_back(i);



    }

    for(int i=1;i<=n;i++)
    {
        dfs(i);
        memset(vis,0,sizeof vis);


    }



}
