#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int p=min({a,c,d});

    a-=p;
    c-=p;
    d-=p;

    int k=min(a,b);

    cout<<p*256+k*32<<'\n';





}
