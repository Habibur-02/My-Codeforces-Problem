#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector<pair<int,int>>v;
    int p=n;

    while(n--)
    {

        int x,y;
        cin>>x>>y;
        v.push_back({x,y});


    }

     sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int>y)
         {
             if(x.second==y.second)
            return (x.first<y.first);///nijer iccha moto use kora jabe ai line,,,same value er choto index ta age nicchi ehkane

             return x.second<y.second;///ekhane choto theke boro value astetse,,,jodi boro value gulo age lage tahole x.first>y.first use kortam;
         });




   /* sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int>y)

       {


         if(x.first==y.first) return x.second<y.second;
         return x.first<y.first;


       }



         );

         */
     for(auto [i,j]:v) cout<<i<<" "<<j<<'\n';

     int c=1;


    // cout<<v[3].first<<" "<<v[3].second<<'\n';

    //// cout<<c;
    cout<<n;


    for(int i=1;i<p-1;i++)
    {

        if(v[i].second<=v[i+1].first) cout<<"This step can take "<<i+1;


    }

   // cout<<c<<'\n';







}
