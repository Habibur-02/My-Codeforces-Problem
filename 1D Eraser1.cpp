#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int n,k;
    cin>>n>>k; //BBWBBWWWB;
    string s;
    cin>>s;

    int ans=0;


    for(int i=0;i<n;i++)
    {
  // cout<<i<<" ";
        if(s[i]=='B')
        {
            ans++;
            i=i+k-1;

        }


    }
    cout<<ans;
    cout<<'\n';

    }



}
