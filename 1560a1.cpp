#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[200];
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>ar[i];

    }
    int m=0,c=0,a=0,i=0;
    while(i<sizeof(ar))
    {
        if(ar[i]>ar[i+1])
        {
            m++;
            i+=2;
        }
        else if(ar[i]<ar[i+1])
        {
            c++;
            i+=2;
        }
        else a++;

    }
    if(m>c) cout<<"Mishka";
    else if(c>m) cout<<"Chris";
    else cout<<"Friendship is magic!^^";




}

