#include<bits/stdc++.h>
using namespace std;
int main()
{
 int k,r;
 cin>>k>>r;

 int sum=k;
bool ok=true;
 for(int i=1;i<=10;i++)
 {
     k=sum*i;
    int p=k%10;

     if(p==r || k%10==0)
     {

         ok=false;
         cout<<i;
         break;
     }
    // k+=k;
 }

if(ok==true) cout<<10<<'\n';


}
