#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++) cin>>ar[i];

    int c=0,i=1;
    if(ar[0]<ar[1]) c++;
    if(ar[n-1]<ar[n-2]) c++;

    for( i=1;i<=n-2;i++)
    {

        if(c>1) break;

        if(ar[i-1]>ar[i] && ar[i+1]>=ar[i])
        {
            if(ar[i]==ar[i+1])
            {
                int x=ar[i];

                while(x==ar[i])
                {
                    i++;
                    //cout<<i<<" ";
                }

                if(x<ar[i]) c++;
                //cout<<i<<" ";


            }
            else
            {
                c++;
               // cout<<i<<" ";


            }

        }
    // cout<<i<<" ";


    }

    if(c==1)  cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    //cout<<c;
   // cout<<i;

}
