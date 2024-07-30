
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
vector<int>v,v1;

for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    if(a%2==0)
        v.push_back(a);
        else v1.push_back(a);


}

//cout<<v.size();
int ans=0;
int z=1;
for(int i=0;i<v.size();i++)
{
    ans+=n-z;
    z++;

}



for(int i=0;i<v1.size();i++)
{
    for(int j=i+1;j<v1.size();j++)
    {
        if(__gcd(v1[i],2*v1[j])>1)
        {
            ans++;
        }
    }
}
cout<<ans<<endl;
    }

}
