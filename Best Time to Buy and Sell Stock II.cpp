#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ar[n+3];
    for(int i=1;i<=n;i++) cin>>ar[i];


    int b=ar[0];
    int p=0;

    for(int i=1;i<n;i++)
    {
        if(b<ar[i])
        {

            p+=ar[i]-b;
            b=1<<30;


        }
        else
        {
           b=ar[i];


        }


    }
      cout<<p;



}
