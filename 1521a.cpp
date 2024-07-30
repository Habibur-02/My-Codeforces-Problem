#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
cin>>n;
while(n--)
{


    int t,c=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        else{
            if(a[i+1]==a[i+2])
            {
                cout<<i+1<<endl;
                break;
            }
            else cout<<i+2<<endl;break;}



        }



    }




}
