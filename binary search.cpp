#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int n;
int upperbond(int ar[],int x)
{
    cout<<"UPPer BOND-> ";
     int l=0;
  int h=n-1;

  while(h-l>1)
  {
      int mid=(l+h)/2;

      if(ar[mid]<=x) l=mid+1;
      else h=mid;



  }


    if(ar[h]==x) cout<<h<<nl;
    else if(ar[l]==x)  cout<<l<<nl;
    else cout<<"NoT found"<<'\n';

}
int lowerbond(int ar[],int x)
{
     cout<<"Lower BOND-> ";

     int l=0;
  int h=n-1;

  while(h-l>1)
  {
      int mid=(l+h)/2;

      if(ar[mid]<x) l=mid+1;
      else h=mid;



  }


    if(ar[l]==x) cout<<l<<nl;
    else if(ar[h]==x) cout<<h<<nl;
    else cout<<"NOT found"<<nl;



}
int main()
{
   // int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++) cin>>ar[i];

    sort(ar,ar+n);

    upperbond(ar,8);
    lowerbond(ar,8);


}
