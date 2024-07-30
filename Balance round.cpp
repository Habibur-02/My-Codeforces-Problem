#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


   ll n,k;
    cin>>n>>k;
   ll ar[n+3];
    for(int i=1;i<=n;i++) cin>>ar[i];
    int l=1;
    vector<pair<int,int>>v;
    sort(ar+1,ar+n+1);

   // return 0;
    for(int i=1;i<n;i++)
    {
        if(ar[i+1]-ar[i]>k)
        {
      v.push_back({l,i});
      l=i+1;
        }
        if(i+1==n)
        {
            v.push_back({l,i+1});
        }



    }


    //for(int )
  int mx=-1;
    for(auto [i,j]:v)
    {
        //cout<<i<<" "<<j<<'\n';
        mx=max(j-i+1,mx);


    }
 // cout<<l;
 if(n==1)
 {
     cout<<0<<nl;
 }
 else

 cout<<n-mx<<nl;

    }


}
