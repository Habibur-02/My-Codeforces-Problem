#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{




    int n;
    cin>>n;
    int ar[n+3];
    for(int i=1;i<=n;i++) cin>>ar[i];
    int c=0;
  int i=2;
  if(n==1)
  {
      cout<<"YES"<<'\n';
      continue;
  }

  int p=1;
  while(ar[p]==ar[p+1]) p++;

    i=p;




  if(ar[p]<ar[p+1]) c++;
  //if(ar[n-1]>ar[n]) c++;

  int k=n;

  while(ar[k]==ar[k-1]) k--;

  if(ar[k-1]>ar[k]) c++;


   while(i<k)
   {


        int x=ar[i];
        int y=ar[i-1];

        while(x==ar[i] && i<n) i++;



        if(y>x && ar[i]>x)
        {
            c++;
        }



    }
    // cout<<c<<'\n';
      (c==1)?cout<<"YES"<<'\n':cout<<"NO"<<'\n';


}






}
