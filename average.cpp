#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int p,c,m,i,b;
    cin>>p>>c>>m>>i>>b;
    double per,avg;
    double  total=(p+c+m+i+b);

    avg=(total)/5;

    per=((total)/500)*100;

   cout<<total<<nl;
   cout<<fixed<<setprecision(2)<<avg<<nl;
   cout<<fixed<<setprecision(2)<<per<<nl;


}
