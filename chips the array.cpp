#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{


    int n;
    cin>>n;
    int ar[n+3];
    int br[n+3];

    for(int i=1;i<=n;i++)
    {
        cin>>ar[i]>>br[i];
    }
    int  arr[n+3][n+3];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=ar[i]+br[j];
        }
    }
   int sum1=0;
    for(int i=1;i<=n;i++)
    {
        int mn=INT_MAX;
        for(int j=1;j<=n;j++)
        {
            mn=min(mn,arr[i][j]);

        }
        sum1+=mn;
    }



 // cout<<sum1;
  //return 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                swap(arr[i][j],arr[j][i]);
            }


        }
    }
int p=1;
int k=0;
    while(p<=n)
    {
        int mn=1000;
        for(int i=1;i<=n;i++)
        {
            mn=min(mn,arr[p][i]);


        }
        k+=mn;
        p++;

    }
    cout<<k;





    int sum2=0;
     for(int i=1;i<=n;i++)
    {
        int mn=INT_MAX;
        for(int j=1;j<=n;j++)
        {
            mn=min(mn,arr[i][j]);

        }
        sum2+=mn;
    }
    cout<<sum2;
    return 0;

    cout<<min(sum1,sum2)<<'\n';





}
