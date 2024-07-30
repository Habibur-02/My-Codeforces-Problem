#include<bits/stdc++.h>
using namespace std;
void bs(int ar[],int n,int x)
{
    int p,q,mid;
    p=0;
    q=n-1;

//int ams=-2;



    while(p<=q)
    {
        mid=(p+q)/2;
        if(ar[mid]==x)
        {
            cout<<"yes"<<" "<<mid<<endl;
            return;
        }

        else if(ar[mid]>x) q=mid-1;
        else p=mid+1;



    }








}


int main()
{

    int n,x;
    cin>>n>>x;
    int ar[n+3];

    for(int i=0;i<n;i++) cin>>ar[i];

    sort(ar,ar+n);

    bs(ar,n,x);





}
