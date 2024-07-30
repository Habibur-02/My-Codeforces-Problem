#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define no cout<<"NO"<<nl
#define yes cout<<"YES"<<nl
int main()
{
    int n;
    cin>>n;
    int ar[n+3];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];


    }
    bool ok=true;
    int mx=INT_MIN;
  //  int sum=0;
    vector<int>v1,v;
    int l=0;
    int r;

    for(int i=0;i<n;i++)
    {
        if( ar[i]>=0 && ok==false )
        {
            ok=true;
            v1.push_back(i);



        }
        else if(ar[i]<0 && ok==true)

        {
            ok=false;
            v1.push_back(i);

        }

    }

    for(auto u:v1) cout<<u<<" ";
    cout<<endl;

    int sum=0;
    for(int i=0;i<v1.size()-1;i++)
    {
        int k=v1[i+1]-v1[i];
        v.push_back(k);
        sum+=k;


    }
    v.push_back(n-sum);


    for(auto i:v) cout<<i<<" ";
}
