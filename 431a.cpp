#include<bits/stdc++.h>
using namespace std;
int main()
{
    //char s[100];
    int t;
    cin>>t;
    while(t--)
    {


    int ar[4];
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    int a=0;
    for(int i=1;i<4;i++)
    {
        if(ar[0]>ar[i])
            a++;


    }
    cout<<3-a<<endl;
    }

}
