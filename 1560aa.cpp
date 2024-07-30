
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=2000;i++)
    {
        if(i%3!=0 || i%10!=3)
        {
            v.push_back(i);
        }



    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }



}
