#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


 int n;
 cin>>n;
 int ar[n+3];


 for(int i=1;i<=n;i++) cin>>ar[i];

 int c=ar[1];


 for(int i=2;i<=n;i++)
 {

     if(c<ar[i])
     {
         int p=abs(c-ar[i]);

        // c+=abs(c-ar[i]);
        if(p%2==0) c+=p/2;
        else c+=(p/2)+1;


     }


 }
 cout<<c<<'\n';

    }

}
