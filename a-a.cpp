#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


 int a,b,c,d;
 cin>>a>>b>>c>>d;


 double ans1,ans2;
 ans1=sqrt(a*a+b*b);
 ans2=sqrt(c*c+d*d);
 //cout<<ans1<<" "<<ans2<<nl;
 if(ans1==ans2) cout<<"EQUAL"<<nl;
 else if(ans1>ans2) cout<<"ALEX"<<nl;
 else cout<<"BOB"<<nl;



 cout<<fixed<<setprecision(8)<<ans1<<" "<<ans2<<nl;

    }

}

