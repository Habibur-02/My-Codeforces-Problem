#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v;


    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);


    }
 sort(v.begin(),v.end());


    int i=0;
    int j=v.size()-1;

    while(i<j)
    {


        if(v[i]+v[j]==x)
            {cout<<"yes";
            break;}

        else if(v[i]+v[j]>x) j--;
        else i++;

    }






}
