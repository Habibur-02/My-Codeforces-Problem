#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int main()
{
   int a,b;
   cin>>a>>b;
   int a1=0,a0=0,b1=0,b0=0;

   while(a)
   {
       //v.push_back(a%2);
       if(a%2==1) a1++;
       else a0++;
       a=a/2;



   }
 //  reverse(v.begin(),v.end());

  // for(auto j : v) cout<<j<<" ";




   while(b)
   {
       //v1.push_back(b%2);
       if(b%2==1) b1++;
       else b0++;
       b=b/2;



   }

   //reverse(v1.begin(),v1.end());


  //cout<<b1<<" "<<a1<<" "<<b0<<" "<<a0<<nl;
 // cout<<a1<<" "<<a0<<" "<<b1<<" "<<b0<<nl;
  if(b1==a1 && b0==a0) cout<<"good"<<nl;
  else cout<<"bad"<<nl;



}
