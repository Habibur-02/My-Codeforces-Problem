#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int a,b;
    cin>>a>>b;
    if(a>b||a==b){
        cout<<(max(2*b,a)*max(2*b,a))<<endl;
    }
    else{

        cout<<(max(2*a,b)*max(2*a,b))<<endl;
    }


    }
}

