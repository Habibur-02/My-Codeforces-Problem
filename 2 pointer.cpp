#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,12,4,32,12,10,322,24,32};

    sort(v.begin(),v.end());

int i=0;
int j=v.size()-1;
//unique(v.begin(),v.end());
while(1)
{
    if(j=v.size()-1)
    {
        i++;
        j=i+1;
        if(i=v.size()-1) break;
    }
    if(v[i]==v[j]){v.erase(v.begin()+j-1);



    }
    j++;

}






    for(int i=0;i<v.size();i++)
    {
cout<<v[i]<<" ";
    }



}
