#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
int main()
{
int t;
cin>>t;
while(t--)
{


int n;
cin>>n;

ll ar[n];
//int mx=INT_MIN,mn=INT_MAX;
for(int i=0;i<n;i++)
{
    cin>>ar[i];




}

sort(ar,ar+n);


ll a=ar[0],b=ar[n-1],c=ar[n-2];

//cout<<a<<" "<<b<<" "<<c;
ll p=abs(a-b)+abs(b-c);
ll j=abs(b-a)+abs(a-c);
ll g=abs(a-c)+abs(c-b);
cout<<max(g,max(p,j))<<nl;
}

}
