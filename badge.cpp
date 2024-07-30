#include<bits/stdc++.h>
using namespace std;
int solve(int ar[],int p)
{
    map<int,int>m;
    m[p]++;
    while(1)
    {
        if(m.find(ar[p])!=m.end())
        {

            cout<<ar[p]<<" ";
            break;
        }

       // if()
       m[ar[p]]++;
       p=ar[p];


    }



}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];

    for(int i=1;i<=n;i++) cin>>ar[i];

    for(int i=1;i<=n;i++)
    {

        if(i==ar[i]) cout<<i<<" ";
      else solve(ar,i);


    }





}
