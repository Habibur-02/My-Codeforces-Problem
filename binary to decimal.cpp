#include<bits/stdc++.h>
using namespace std;
int main()

{


    int n;
    cin>>n;

    int dec=0;

    int i=0;
   while(n!=0)
   {

       dec+=(n%10)*pow(2,i);
       n/=10;
       i++;


   }
    cout<<dec;



}
