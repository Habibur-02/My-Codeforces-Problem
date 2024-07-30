#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x;
    cin>>n>>x;
    int ar[n+3];
    int ans=0;
    for(int i=1;i<=n;i++) cin>>ar[i];
   sort(ar+1,ar+n+1);
    int sum=0;
    int w;
    for(int i=2;i<=n;i++)
    {
        sum+=(ar[i]-ar[i-1])*(i-1);

        if(sum>=x)
        {
            ans=ar[i-1];
            w=i;
            break;
        }
    }
   if(sum==0)
   {
       cout<<x/n+ar[1]<<'\n';

   }
   else if(sum==x)
     cout<<ans<<'\n';
     else
     {
  // cout<<ans<<'\n';
  int p=ans;
  int sum1=0;
  for(int i=p+1;i<=ar[w];i++)
  {
      sum1+=(ar[i]-ar[i-1])*(i-1);

      if(sum1==x)
      {

          cout<<ar[i];

      }


  }


     }


}
