#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {





    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++) cin>>ar[i];

    sort(ar,ar+n);

    int i=0,j=n-1;
    int ans=0;
    while(i<=j)
    {
        ans+=(ar[j--]-ar[i++]);
 // i++;
 // j--;


    }

    cout<<ans<<nl;

    }

}
