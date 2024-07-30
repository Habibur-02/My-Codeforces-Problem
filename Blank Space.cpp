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





//string s;
//cin>>s;
int ar[n+3];
for(int i=0;i<n;i++) cin>>ar[i];


   int k=0;
   for(int i=0;i<n;i++)
   {
       if(ar[i]==0)
       {
           int p=i;
           int c=0;
           while(p<n && ar[p]==0)
           {
             c++;
             p++;


           }
          k=max(k,c);
           i=p;
       }



   }

   cout<<k<<'\n';


    }

}
