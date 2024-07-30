#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};

#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)

#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);






int32_t main()
{ fast


 int n;
 cin>>n;
 int ar[n+3];
 vector<pair<int,int>>v;
 for(int i=0;i<n;i++)
 {
     int p;
     cin>>p;
     ar[i]=p;
    // cin>>ar[i];
     v.push_back({p,i});

 }

   sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int>y)
         {
             if(x.first==y.first)
            return (x.second<y.second);///nijer iccha moto use kora jabe ai line,,,same value er choto index ta age nicchi ehkane

             return x.first<y.first;///ekhane choto theke boro value astetse,,,jodi boro value gulo age lage tahole x.first>y.first use kortam;
         });

       //  for(auto [i,j]:v) cout<<i<<" "<<j<<" "<<'\n';


 /*
   int x=9;


   int l=0;
   int h=n-1;


   while(h-l>1)
   {





   }




*/
    sort(ar,ar+n);
int x=7;
   int h=n-1;
   int l=0;

   while(h-l>1)
   {

       //if(ar[i])

       int mid=(h+l)/2;

       if(ar[mid]<x)
       {

           l=mid;


       }
       else h=mid-1;



   }
   if(ar[l]==x) cout<<l<<'\n';
   else if(ar[h]==x) cout<<h<<'\n';




}




