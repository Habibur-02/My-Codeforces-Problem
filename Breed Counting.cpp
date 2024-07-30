#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,q;
 cin>>n>>q;

 int ar[n+3];

 for(int i=0;i<n;i++) cin>>ar[i];

 vector<vector<int>>v;
 if(ar[0]==1)
 {
     v.push_back({1,0,0});

 }
 else if(ar[0]==2)
 {
     v.push_back({0,1,0});

 }
 else v.push_back({0,0,1});

     for(int i=1;i<n;i++)
     {

         if(ar[i]==1)
         {
             v.push_back({v[i-1][0]+1,v[i-1][1],v[i-1][2]});



         }
         else if(ar[i]==2)  v.push_back({v[i-1][0],v[i-1][1]+1,v[i-1][2]});
         else  v.push_back({v[i-1][0],v[i-1][1],v[i-1][2]+1});




     }

     while(q--)
     {

         int a,b;
         cin>>a>>b;

         if(a==1)
         {

             cout<<v[b-1][0]<<" "<<v[b-1][1]<<" "<<v[b-1][2]<<'\n';


         }
         else
         {

             cout<<v[b-1][0]-v[a-2][0]<<" "<<v[b-1][1]-v[a-2][1]<<" "<<v[b-1][2]-v[a-2][2]<<'\n';




         }




     }





}
