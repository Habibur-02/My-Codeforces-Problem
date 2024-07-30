#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {


    vector<int>v,v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int a;
       cin>>a;
       v.push_back(a);

    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {

        v1.push_back(abs(v[i]-v[i+1]));


    }
    sort(v1.begin(),v1.end());
    cout<<v1[0]<<endl;}

}
