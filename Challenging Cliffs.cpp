#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
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

int mx=INT_MAX;
int x,y;
for(int i=0;i<n-1;i++)
{

    if(v[i]-v[i+1]<=mx)
    {
        x=i;
        y=i+1;
    }
}
int a=v[x];
int b=v[y];

v.erase(v.begin()+x,v.begin()+y);
//v.erase(v.begin()+y);


for(auto h:v)
{
    cout<<h<<" ";
}





}
