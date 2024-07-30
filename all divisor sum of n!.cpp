#include<bits/stdc++.h>
using namespace std;
vector<int>v;
set<pair<int,int>>s;


void legend(int k,int n)
{
    int ans=0;
    for(int i=k;;i*=k)
    {
        if(n/i==0)
        {
            break;
        }
        else
        ans+=(n/i);

    }
    //m[k]=ans;
    int x=make_pair(k,ans);
    s.insert(x);


}
void prime(int n)
{
    int c=0;
    for(int i=2;i*i<=n;i++)
    {

        if(n%i==0)
        {
            c++;
            break;


        }


    }
    if(c==0) v.push_back(n);



}
int main()
{
    int n;
    cin>>n;

    for(int i=2;i<=n;i++)
    {
        prime(i);

    }


    for(int i=2;i<v.size();i++)
    {
        legend(v[i],n);




    }


   for(auto j:s)
   {
       cout<<s.first<<" "<<s.second<<endl;
   }






}
