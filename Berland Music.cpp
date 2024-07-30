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
    int br[n+3];

    for(int i=1;i<=n;i++) cin>>ar[i];
    string s;
    cin>>s;
    set<int>s0,s1;
    int k=1;
    vector<pair<int,int>>v,v1;


    s='@'+s;
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='0')
        v.push_back({ar[i],i});
        //s0.insert(i);
        else v1.push_back({ar[i],i});

    }
    // vector<pair<int,int>>v;


    sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int>y)
         {
             if(x.first==y.first)
            return (x.second>y.second);///nijer iccha moto use kora jabe ai line,,,same value er choto index ta age nicchi ehkane

             return x.first<y.first;///ekhane choto theke boro value astetse,,,jodi boro value gulo age lage tahole x.first>y.first use kortam;
         });

    sort(v1.begin(),v1.end(),[&](pair<int,int>x,pair<int,int>y)
         {
             if(x.first==y.first)
            return (x.second>y.second);///nijer iccha moto use kora jabe ai line,,,same value er choto index ta age nicchi ehkane

             return x.first<y.first;///ekhane choto theke boro value astetse,,,jodi boro value gulo age lage tahole x.first>y.first use kortam;
         });

         for(auto [i,j]:v)
         {
            br[j]=k;
            k++;


         }

          for(auto [i,j]:v1)
         {
            br[j]=k;
            k++;


         }







    for(int i=1;i<=n;i++) cout<<br[i]<<" ";
    cout<<'\n';


    }


}
