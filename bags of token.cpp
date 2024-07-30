#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int main()
{
 int n,p;
 cin>>n>>p;
 int ar[n+3];

 for(int i=0;i<n;i++)
 {

     cin>>ar[i];


 }
 sort(ar,ar+n);

 int i=0;
 int j=n-1;
 int c=0;
 while(i<j)
 {
     if(p>=ar[i])
     {
         i++;
         c++;
         p-=ar[i];


     }
     else if(c>0)
     {
         c--;
         j--;
         p+=ar[j];

     }
   //  else break;



 }

 cout<<c<<nl;

}
