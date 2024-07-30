
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
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];



      int m=0,b=0;


    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            m+=ar[i];

        }
        else b+=ar[i];



    }

    if(m>b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }





}
