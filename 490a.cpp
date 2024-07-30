#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1,v2,v3;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];



    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            v1.push_back(i+1);
        else if(a[i]==2)
            v2.push_back(i+1);
        else
            v3.push_back(i+1);
    }
    int p=v1.size();
    int q=v2.size();
    int r=v3.size();

    cout<<min(min(p,q),r)<<endl;

    for(int i=0;i<min(min(p,q),r);i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
//cout<<p<<q<<r;

}
