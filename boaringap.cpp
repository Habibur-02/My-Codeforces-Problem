#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ab;
    cin>>ab;
    while(ab--)
    {


    int q,d=0,f=0;
    cin>>q;
    vector<int>v;

    for(int i=1;i<=9;i++)
    {
         int ans=0;
         //int p=10;
    for(int j=i;j<=9999;j*=10)
    {
        //p*=10;
        ans=ans+j;
        v.push_back(ans);
    }

    }


    for(int i=0;;i++)
    {
        if(v[i]!=q)
        {
            f++;
        }

        if(v[i]==q)
        {

        f++;
            break;}
    }
   int h=f%4;
   int v1=(h*(h+1)/2);

    cout<<(f/4)*10+v1<<endl;
    }


}
