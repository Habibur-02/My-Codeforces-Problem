#include <bits/stdc++.h>
using namespace std;

int main() {
    // basicIO();
    // Your cpp code here
    int t;
    cin>>t;
    int u=1;
    while(t--)
    {



    int n,w;
    cin>>n>>w;
    int mx=-1e9;
    int mn=1e9;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        mx=max(mx,y);
        mn=min(mn,y);


    }

    if(mn>=0)
    {
        cout<<"Case "<<u<<": "<<ceil((mx-mn)/w)<<'\n';



    }
    else
    {
        int p=mx+abs(mn);

        cout<<"Case "<<u<<": "<<ceil(p/w)<<'\n';




    }
    u++;

    }

    //return 0;
}

