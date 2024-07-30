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

    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);



    }
  for(int i=0;i<v.size();i++)
  {

      for(int j=i+1;j<v.size();j++)
      {

          if(count(v.begin()+j,v.end(),abs(v[i]-v[j]))!=0)
             {
                 m[v[i]]++;
                 m[v[j]]++;
             }

      }
  }
  //cout<<m.size()<<endl;
  int j=INT_MIN;

  for(auto h:m)
  {
      if(h.second>j) j=h.second;


      cout<<h.first<<" "<<h.second<<endl;


  }

  for(auto u:m)
  {
      if(u.second==j)
      {
          cout<<u.first<<'\n';
          m.clear();
          v.clear();
          break;

      }


  }

}

}
