#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int p=a[0];

    for(int i=0;i<n;i++)
    {

        if(a[i]>p)
            p=a[i];

      sum+=a[i];

    }
    sum=sum-p;
//out<<sum;
cout<<(n-1)*p-(sum-p)-p;
}
