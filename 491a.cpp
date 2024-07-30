#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    string q;
  vector<int>v;
  for(int i=0;i<4;i++)
  {
      int a;
      cin>>a;
      v.push_back(a);
  }
    int ar[101];
    for(int i=0;i<101;i++)
    {
        cin>>ar[i];
    }


    for(int i=0;i<sizeof(ar);i++)
    {
        ans=ans+v[ar[i]-1];

    }

    cout<<ans;

}
