#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    int br[n+3];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(ar[i]<0)
        br[i]=-1;
        else br[i]=1;


    }

int r=0;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++)
    {
        if(i==n || ar[i]!=ar[i+1])
        {
            if(i==n)
            {
              v.push_back({r+1,n});
            }
            else
            {
                v.push_back({r+1,i});
                r=i;



            }



        }





    }
int sum=0;

     for(auto [i,j]:v)
        {
            int cur=ar[i];
  for(int o=i;o<=j;o++)
  {
      cur=max(cur,ar[o]);


  }
  sum+=cur;



        }


        cout<<sum;

}

