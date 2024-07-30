#include<bits/stdc++.h>
using namespace std;
const int N=10e6+7;
vector<int>v[N];
int vis[N];
int col[N];
bool  bipartite;
#define nl '\n'

int dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;

    for(auto child:v[node])
    {

        if(!vis[child])
        {
            dfs(child,c^1);




        }
        else if(col[node]==col[child])
        {

            bipartite=false;



        }



    }




}
int main()
{

int cs=0;
int t;
cin>>t;
while(t--)
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
   // not_bi
   bipartite=true;

    dfs(1,1);

cout<<"Scenario #"<<++cs<<":"<<nl;

    if(bipartite) cout<<"No suspicious bugs found!"<<nl;
    else cout<<"Suspicious bugs found!"<<nl;



    for(int i=0;i<=n;i++)
    {
        vis[i]=0;
        col[i]=0;
v[i].clear();

    }



}
//return 0;

}
