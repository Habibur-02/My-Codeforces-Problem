#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 int main()
 {

     optimize();


     int n;
     cin>>n;
     map<string,int>m;




     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         m[s]++;

         if(m[s]==1) cout<<"NO"<<endl;
         else cout<<"YES"<<endl;





     }

 }
