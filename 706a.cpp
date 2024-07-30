#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t,m=0,c=0,a=0;
    cin>>t;
    while(t--)
    {
        int a,b;
    cin>>a>>b;

    if(a>b)
    {
        m++;
    }
        else if(b>a)
        {
            c++;

        }
        else a++;

    }
    if(m==c)
    {
        cout<<"Friendship is magic!^^";
    }
    else if(m>c)
    {
        cout<<"Mishka";
    }
    else
        cout<<"Chris";


}
