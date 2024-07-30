#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
    int n,k,a,count=0;;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++)
    {
        if((v[i]+k)<=5)
        {
            count++;
        }
    }
    cout<<(count/3);


}
