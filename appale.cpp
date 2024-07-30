#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int main()
{
 int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     v.push_back(x);

 }
 sort(v.begin(),v.end());
 cout<<v[1]-v[0]<<nl;

}
