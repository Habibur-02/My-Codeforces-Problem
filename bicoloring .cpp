#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
const int N=10e5+2;
vector<int>v[N];
int vis[N];
int col[N];
void dfs(int node,int c)
{
    vis[node]=1;
    col[node]=1;

    for(auto child:v[node])
    {



        if(!vis[node])
            dfs(child,c^1);

    }




}

int main()
{

    int n;
    cin>>n;
    int p=n-1;
    while(p--)
    {

        int x,y;
        cin>>x>>y;

        v[x].push_back(y);
        v[y].push_back(x);



    }
    dfs(1,1);
    int one=0,zero=0;


    for(int i=1;i<=n;i++)
    {


        if(col[i]==1) one++;
        else zero++;
    }




    cout<<one*zero-(n-1)<<nl;
}
