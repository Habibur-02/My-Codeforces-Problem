#include<bits/stdc++.h>
using namespace std;
int main()
{

int np;
cin>>np;
 while(np--)
{


    int n,c=0;
    cin>>n;

    char ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==ar[i+1])
        {
            continue;
        }
        else
        {
            for(int j=i;j<n;j++)
            {
                if(ar[i]==ar[j+1])
                {
                    c++;
                }
            }
        }


    }
    if(c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
