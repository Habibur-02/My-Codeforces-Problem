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


 int n;
 cin>>n;
ll ar[n+3];
 ll br[n+3];
ll mx=-3984334;
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     mx=max(mx,ar[i]);
     br[i]=ar[i];
 }
    sort(br,br+n);
   // cout<<br[n-2];
    //return 0;

    for(int i=0;i<n;i++)
    {
        if(ar[i]!=mx)
        {
            cout<<ar[i]-mx<<" ";
        }
        else
        {

            cout<<mx-br[n-2]<<" ";


        }
    }
cout<<'\n';


    }


}


