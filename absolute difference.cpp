#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int n;
 cin>>n;
 int ar[n+3];
 bool arr[n+3];


 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     arr[i]=true;
 }
 sort(ar,ar+n);



 int m;
 cin>>m;
 bool brr[m+3];
 int br[m+3];
 for(int i=0;i<m;i++)
 {
     cin>>br[i];
     brr[i]=true;


 }
 sort(br,br+m);
 int c=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {

           if(arr[i]==true && brr[j]==true)
           {
               if(abs(ar[i]-br[j])==1)
               {
                  c++;
                  arr[i]=false;
                  brr[i]=false;

               }



           }


       }
   }



 cout<<c;


}
