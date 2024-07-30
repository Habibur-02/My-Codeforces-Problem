#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ar[n];
    double arr[n];
    int  p;


    for(int i=0;i<n;i++)cin>>ar[i];

    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {

            arr[i]=(ar[i]+ar[j]+ar[j+1])/(ar[i]*ar[j]*ar[j+1]);
        }
    }

    //sort(v.begin(),v.end());


    cout<<arr[0]<<endl;


}
