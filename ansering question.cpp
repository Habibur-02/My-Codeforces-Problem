#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{

    ll n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i]*(n-2*i-1);

    }


    cout<<sum<<endl;

}
