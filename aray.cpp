#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{


    int n;
    cin>>n;

    int ar[n];
    vector<int>v;

    for(int i=1;i<=n;i++)
    {
        int x;

        cin>>x;
        v.push_back(x);


    }
    int ans=0;

    if(n==1) cout<<0<<nl;

     //   sort(ar,sizeof(ar));

     sort(v.begin(),v.end());

        for(int i=1;i<=n/2;i++)
        {
            ans+=v[n-1+i]-v[i];


        }



    cout<<ans<<nl;

}
